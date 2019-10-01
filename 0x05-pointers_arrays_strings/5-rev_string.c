#include "holberton.h"
/**
* rev_string - reverse a string
*@s: string to reverse
*Return: 0
*/
void rev_string(char *s)
{
int y, z;
char a;
y = 0;
while (*(s + y) != '\0')
y++;
y--;
for (z = 0; z < y; z++)
{
a = *(s + y);
*(s + y) = *(s + z);
*(s + z) = a;
y--;
}
}
