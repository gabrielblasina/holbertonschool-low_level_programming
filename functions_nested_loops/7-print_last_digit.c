#include "main.h"
/**
 * print_last_digit - Entry point
 * Return: 0 (Success)
 * @r: Variable
 */
int print_last_digit(int r)
{
	int i = r % 10;

	if (i < 0)
	{
		i = i * -1;
		_putchar(i + '0');
		return (i);
	}
	_putchar('0' + i);
	return (i);
}
