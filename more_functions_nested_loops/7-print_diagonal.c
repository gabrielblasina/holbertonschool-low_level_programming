#include "main.h"
/**
 * print_diagonal - entry point
 * Return: void
 * @n: variable
*/
void print_diagonal(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0 ; x < n ; x++)
		{
			_putchar(' ');
			if (x == n - 1)
			{
				_putchar(92);
				_putchar(10);
			}
		}
	}
	else if (n <= 0)
	{
		_putchar(10);
	}
}
