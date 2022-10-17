#include "main.h"
/**
 * _pow_recursion - recursive function
 * Return: -1 (if y is lower than 0), y (if success)
 * @x: int variable
 * @y: int variable
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
