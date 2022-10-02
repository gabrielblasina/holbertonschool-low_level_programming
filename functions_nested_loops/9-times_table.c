#include "main.h"
/**
*times_table - entry point
*Return: void
*@r: variable
*@i: variable
*/
void times_table(void)
{
	int r;
	int i;
	int result;
	
	for (r = 0 ; r <= 9 ; r++)
	{
		for (i = 0 ; i <= 9 ; i++)
		{
			result = (r * i);
				
			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
