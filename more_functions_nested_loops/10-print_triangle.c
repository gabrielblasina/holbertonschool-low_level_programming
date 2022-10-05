#include "main.h"
/**
 * print_triangle - entry point
 * Return: void
 * @size: variable
*/
void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 0 ; x < size ; x++)
		{
			for (y = size - 1 ; y >= 0 ; y--)
			{
				if (y > x)
				{
					 _putchar(' ');
				}
				else if (y <= x)
				{
					_putchar('#');
				}
			}
			_putchar(10);
		}
	}
	else if (size <= 0)
	{
		_putchar(10);
	}
}
