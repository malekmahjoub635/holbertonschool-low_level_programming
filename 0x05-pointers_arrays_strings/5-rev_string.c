#include "holberton.h"
/**
 *rev_string -  a function that reverses a string
 *Return: 0
 */
void rev_string(char *s)
{
int i, j;
char tmp;
i = 0;
while (*(s + i) != '\0')
{
i++;
}
for (j = 0; j <= (i - 1) / 2; j++)
{
tmp = *(s + j);
*(s + j) = *(s + i - 1 - j);
*(s + i - 1 - j) = tmp;
}
}
