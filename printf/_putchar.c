#include <unistd.h>
/**
 * _putchar - writes an output
 * @c: character to print
 * Return: if success 1 else -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
