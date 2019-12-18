#include <stdio.h>
#include "holberton.h"
/**
* _isupper -  function that checks for uppercase character.
* @c: is an integer.
* Return: 0 or 1
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{ return (1); }
else
{ return (0); }
}
