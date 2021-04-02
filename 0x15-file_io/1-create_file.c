#include "holberton.h"
/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd, wr, l = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (; text_content[l]; l++)
;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(fd, text_content, l);
if (fd == -1 || wr == -1)
return (-1);
close(fd);
return (1);
}
