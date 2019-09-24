#include "holberton.h"
/**
 * _isalpha - checks if character is lowercase or uppercase letter
 *
 * @r: input character tested
 *
 * Return: 1 or 0
 */
int _isalpha(int r)
{
return (((r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z')) ? 1 : 0);
}
