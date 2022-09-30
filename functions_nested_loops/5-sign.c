#include "main.h"
/**
*print_sign - Entry point
*Return: 1 (positeve) 0 (zero) -1 (negative)
*@n: variable
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
