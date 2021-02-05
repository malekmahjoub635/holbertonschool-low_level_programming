#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
int ch;
char n;
for (ch = 0; ch <= 9; ch++)
putchar(ch + '0');
for (n = 'a'; n <= 'f'; n++)
putchar(n);
putchar('\n');
return (0);
}
