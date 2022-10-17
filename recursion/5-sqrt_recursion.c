#include "main.h"
/**
 * _natural_sqrt - function to find natural square root
 * Return: -1 (if no natural square root) y (success)
 * @x: variable
 * @y: variable
*/
int _natural_sqrt(int x, int y)
{
	if (x < y * y)
	{
		return (-1);
	}
	if (x == y * y)
	{
		return (y);
	}
	if (x != y * y)
	{
		return (_natural_sqrt(x, y + 1));
	}
	return (0);
}
/**
 * _sqrt_recursion - recursive function
 * Return: -1 (if n do not have natural square root) n (success)
 * @n: variable
*/
int _sqrt_recursion(int n)
{
	return (_natural_sqrt(n, 0));
}
