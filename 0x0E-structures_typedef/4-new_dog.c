#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog of type struct dog
 * @name: The new dog's name
 * @age: The new dog's age
 * @owner: The new dog's owner
 *
 * Return: A pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
int i, j;
int k, l;
newdog = malloc(sizeof(struct dog));
if (newdog == NULL)
return (NULL);
for (k = 1; name[k] != '\0'; k++)
;
newdog->name = malloc(sizeof(char) * (k + 1));
if (newdog->name == NULL)
{
free(newdog);
return (NULL);
}
for (l = 1; owner[l] != '\0'; l++)
;
newdog->owner = malloc((l + 1) * sizeof(char));
if (newdog->owner == NULL)
{
free(newdog->name);
free(newdog);
return (NULL);
}
newdog->age = age;
for (i = 0; name[i] != '\0'; i++)
newdog->name[i] = name[i];
newdog->name[i] = '\0';
for (j = 0; owner[j] != '\0'; j++)
newdog->owner[j] = owner[j];
newdog->owner[j] = '\0';
return (newdog);
}
