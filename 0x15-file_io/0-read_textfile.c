#include "holberton.h"
/**
* read_textfile - function that reads a text file and prints it to the POSIX.
* @filename: is a char string.
* @letters: is a number of letters.
* Return: 0 or the number of letters.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t r, w;
char *b;
if (filename == NULL)
return (0);
f = open(filename, O_RDWR);
if (f == -1)
return (0);
b = malloc(sizeof(char) * letters);
if (b == NULL)
{
free(b);
return (0);
}
r = read(f, b, letters);
if (r == -1)
return (0);
w = write(STDOUT_FILENO, b, r);
if (w == -1 || r != w)
return (0);
free(b);
close(f);
return (w);
}
