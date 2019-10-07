#include "holberton.h"
/**
* print_chessboard - function that prints the chessboard
* @a:characters
*
* Return: 0
*/
void print_chessboard(char (*a)[8])
{
int y;
int z;
y = 0;
while (y < 8)
{
z = 0;
while (z < 8)
{
_putchar(a[y][z]);
z++;
}
_putchar('\n');
y++;
}
}
