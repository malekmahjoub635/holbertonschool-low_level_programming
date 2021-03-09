include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
  int i;

  i = 0;

  while (s[i] != '\0')
    {
      i++;
    }
  return (i);
}
/**
 * *_strcpy - string copy
 * @dest: original string
 * @src: copied string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len, i;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *s;
int l1, l2;
l1 = _strlen(name);
l2 = _strlen(owner);
s = malloc(sizeof(dog_t));
if (s == NULL)
return (NULL);
s->name = malloc(sizeof(char) * (l1 + 1));
if (s->name == NULL)
{
free(s);
return (NULL);
}
s->owner = malloc(sizeof(char) * (l2 + 1));
if (s->owner == NULL)
{
free(s);
free(s->name);
return (NULL);
}
_strcpy(s->name, name);
_strcpy(s->owner, owner);
s->age = age;
return (s);
}
