#include "main.h"
/**
 * print_line - entry point
 * Return: void
 * @n: variable
*/
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0 ; x <= n ; x++)
		{
			_putchar('_');
		}
	}
	else if (n <= 0)
	{
		_putchar(10);
	}
	_putchar(10);
}
