#include "main.h"
/**
 * print_diagonal - entry point
 * Return: void
 * @n: variable
*/
void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0 ; x < n ; x++)
		{
			for (y = 0 ; y < n ; y++)
			{
				if (x == y)
				{
					_putchar(92);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar(10);
		}
	}
	else if (n <= 0)
	{
		_putchar(10);
	}
}
