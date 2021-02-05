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
int i;
for (ch = 0; ch <= 9; ch++)
{
for (i = 0; i <= 9; i++)
{
putchar(ch + '0');
putchar(i + '0');
if ((ch != 9) || (i != 9))
{
putchar(',');
putchar(' '); 
}
}
}
putchar('\n');
return (0);
}
