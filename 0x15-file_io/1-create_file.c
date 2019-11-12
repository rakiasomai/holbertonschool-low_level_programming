#include "holberton.h"
/**
* create_file - is a function that creates a file.
* @filename: name of file.
* @text_content: string to write to file
* Return: 1 or -1.
*/
int create_file(const char *filename, char *text_content)
{
int f, r, y;
if (filename == NULL)
return (-1);
f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (f == -1)
return (-1);
if (text_content)
{
for (y = 0; text_content[y] != '\0'; y++)
;
r = write(f, text_content, y);
if (r == -1)
return (-1);
}
close(f);
return (1);
}
