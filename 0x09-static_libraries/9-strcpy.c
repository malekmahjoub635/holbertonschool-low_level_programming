#include "holberton.h"
/**
 *_strcpy - copy a string in another one
 *@src: string1
 *@dest: string2(copied)
 *Return: string
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0' ; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
