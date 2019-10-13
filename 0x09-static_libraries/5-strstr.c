#include "holberton.h"
#include <stdlib.h>
/**
* *_strstr - function that locates a substring
* @haystack: string
* @needle: string
* Return: NULL
*/
char *_strstr(char *haystack, char *needle)
{
int y;
int z;
int x;
y = 0;
x = 0;
while (haystack[y] != '\0')
{
z = 0;
while (needle[z + x] != '\0' && haystack[y + x] != '\0'
&& needle[z + x] == haystack[y + x])
{
if (haystack[y + x] != needle[z + x])
break;
x++;
}
if (needle[z + x] == '\0')
return (&haystack[y]);
z++;
y++;
}
return (NULL);
}
