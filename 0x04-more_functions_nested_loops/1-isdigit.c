#include <stdio.h>
#include "holberton.h"

/**
* int _isdigit: function that checks for a digit (0 through 9).
* @c
* return : 0 or 1
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{ return (1); }
else
{ return (0); }
}
