#include "main.h"
/**
 * factorial - recursive function
 * Return: -1 (n lower than 0), n (success)
 * @n: int variable
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
