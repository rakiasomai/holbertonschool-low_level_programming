#include "holberton.h"
#define MAXSIZE 1204
#define SE STDERR_FILENO
/**
* main - funtion to creat the copy script
* @ac: is an argument.
* @av: is an argument.
* Return: 0
*/
int main(int ac, char *av[])
{
int input, output, i, o;
char buf[MAXSIZE];
mode_t mode;
mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
if (ac != 3)
dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
input = open(av[1], O_RDONLY);
if (input == -1)
dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
output = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
if (output == -1)
dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
do {
i = read(input, buf, MAXSIZE);
if (i == -1)
{
dprintf(SE, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
if (i > 0)
{
o = write(output, buf, (ssize_t) i);
if (o == -1)
{
dprintf(SE, "Error: Can't write to %s\n", av[2]);
exit(99);
}
}
} while (i > 0);
i = close(input);
if (i == -1)
dprintf(SE, "Error: Can't close fd %d\n", input), exit(100);
o = close(output);
if (o == -1)
dprintf(SE, "Error: Can't close fd %d\n", output), exit(100);
return (0);
}
