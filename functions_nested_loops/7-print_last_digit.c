#include "main.h"
/**
 * print_last_digit - Entry point
 * Return: 0 (Success)
 * @r: Variable
 * @mod: Variable
 */
int print_last_digit(int r)
{
	int mod;
	int ret;
	int _mod;

	if (r >= 0)
	{
		mod = r % 10;
		ret = '0' + mod;
		_putchar(ret);
		return (ret);
	}
	else
	{
		_mod = -(r) % 10;
		_putchar('0' + _mod);
		return (_mod);
	}
}
