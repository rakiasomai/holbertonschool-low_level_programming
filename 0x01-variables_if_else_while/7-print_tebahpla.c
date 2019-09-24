#include <stdio.h>
/**
 * main - Entry point
 * print message
 * Return: Always 0 (Success)
 */
int main(void)
{
int Alphabet;
for (Alphabet = 'z'; Alphabet >= 'a'; Alphabet--)
putchar (Alphabet);
putchar('\n');
return (0);
}
