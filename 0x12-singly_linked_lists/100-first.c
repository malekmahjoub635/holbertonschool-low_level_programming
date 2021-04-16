#include <stdio.h>
void np(void) __attribute__ ((constructor));
/**
 * np - a function that prints a sentence before the main function is executed
 */
void np(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
