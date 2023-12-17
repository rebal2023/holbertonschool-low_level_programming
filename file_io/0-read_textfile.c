#include "main.h"
/**
* read_textfile - function that reads a text file & prints it to the standard output
* @filename: name of the file
* @letters: number of letters it should read and print
* Return: number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
size_t r, nb;

if (filename == NULL || letters < 1)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

buf = malloc(letters);

if (buf == NULL)
return (0);

r = read(fd, buf, letters);

if (r < 1)
return (0);

nb = write(STDOUT_FILENO, buf, r);

if (nb < 1)
return (0);

free(buf);
close(fd);
return (nb);
}
