#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: A pointer
 * @letters: number of letters
 * Return: result of the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, re, wr;
char *bfr;
if (filename == NULL)
return (0);
bfr = malloc(sizeof(char) * letters);
if (bfr == NULL)
return (0);
fd = open(filename, O_RDONLY);
re = read(fd, bfr, letters);
wr = write(STDOUT_FILENO, bfr, re);
if (fd == -1 || re == -1 || wr == -1 || wr != re)
{
free(bfr);
return (0);
}
free(bfr);
close(fd);
return (wr);
}
