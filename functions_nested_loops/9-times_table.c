#include "main.h"
/**
*times_table - entry point
*Return: void
*/
void times_table(void)
{
	int r;
	int i;
	int result;

	for (r = 0 ; r <= 9 ; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (i = 1 ; i <= 9 ; i++)
		{
			result = r * i;
			if (((result / 10) + '0') == '0')
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
