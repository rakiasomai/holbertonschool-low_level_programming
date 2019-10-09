#include "holberton.h"
/**
  * is_prime_number - function taht returns a prime number
  * @n: is an integer
  * Return: return 2 instead of 1
  */
int is_prime_number(int n)
{
if (n == 1 || n < 0)
return (0);
return (helper_prime(2, n));
}
/**
  * helper_prime - helps find the prime number
  * @y: is an integer
  * @z: is an integer
  * Return: increment i and compare to n
  */
int helper_prime(int y, int z)
{
if (z == y)
{
return (1);
}
else if (z % y == 0)
{
return (0);
}
return (helper_prime(y + 1, z));
}
