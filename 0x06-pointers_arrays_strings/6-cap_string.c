#include "holberton.h"
/**
* *cap_string -function that capitalizes all words
* @b : string of charcaters
* Return: 0
*/
char *cap_string(char *b)
{
int y = 0;
while (b[y] != '\0')
{
if
(b[y] == ' ' || b[y] == ';' || b[y] == '\n' || b[y] == '\t'
|| b[y] == ',' || b[y] == '.'
|| b[y] == '!' || b[y] == '?' || b[y] == '"' || b[y] == '('
|| b[y] == ')' || b[y] == '{' || b[y] == '}')
if (b[y + 1] >= 'a' && b[y + 1] <= 'z')
b[y + 1] = b[y + 1] - 32;
y++;
}
if (b[0] >= 'a' && b[0] <= 'z')
b[0] = b[0] - 32;
return (b);
}
