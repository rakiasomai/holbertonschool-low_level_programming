#include "holberton.h"
/**
* append_text_to_file - is a function that appends text at the end of a file.
* @filename: is the name of the file.
* @text_content: is a char string.
* Return: 1 or -1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int f, r, y;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
f = open(filename, O_APPEND | O_WRONLY);
if (f == -1)
return (-1);
for (y = 0; text_content[y] != '\0'; y++)
;
r = write(f, text_content, y);
if (r == -1)
return (-1);
close(f);
return (1);
}
