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
for(ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar ('\n') ;
srand(time(0));
n = rand() - RAND_MAX / 2;
return (0);
}
