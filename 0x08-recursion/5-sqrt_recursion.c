#include "holberton.h"
/**
* _sqrt_recursion - function tahts return the natural square root of a number
* @n: is an inetegr
* Return: If no natural square root, return -1. Else return natural
* square root
*/

int _sqrt_recursion(int n)
{
return (halp(n, 1));
}

/**
 * halp -  function to solve _sqrt_recursion
 * @x: is an integer
 * @y: is an incrementer
 * Return: square root if natural square root, or -1 if none found
 */
int halp(int x, int y)
{
int square;
square = y * y;
if (square == x)
return (y);
else if (square < x)
return (halp(x, y + 1));
else
return (-1);
}
