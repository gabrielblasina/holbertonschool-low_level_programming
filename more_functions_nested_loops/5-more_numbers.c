#include "main.h"
/**
 * more_numbers - entry point
 * Return: void
*/
void more_numbers(void)
{
	int i;
	int num;

	i = 0;
	while (i <= 10)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if ((num > 9) && (num <= 14))
			{
				_putchar((num / 10) + '0');
			}
			if (num <= 14)
			{
				_putchar((num % 10) + '0');
			}
		}
		_putchar('\n');
		i++;
	}
}
