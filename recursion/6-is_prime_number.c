#include "main.h"
/**
 * Optimus_Prime - function to find prime numbers
 * Return: 0 (not prime) 1 (prime)
 * @x: variable
 * @y: variable
*/
int Optimus_Prime(int x, int y)
{
	if (y < 0)
	{
		return (0);
	}
	if (y == 1)
	{
		return (0);
	}
	if (y == x)
	{
		return (1);
	}
	if (y % x == 0)
	{
		return (0);
	}
	return (Optimus_Prime(x + 1, y));
}
/**
 * is_prime_number - recursive function
 * Return: 0 (not prime) 1 (prime)
 * @n: variable
*/
int is_prime_number(int n)
{
	return (Optimus_Prime(2, n));
}
