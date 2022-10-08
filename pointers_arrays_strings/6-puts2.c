#include "main.h"
/**
 * puts2 - entry point
 * Return: void
 * @str: variable
*/

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] ; n++)
	{
		if ((n % 2) == 0)
		{
			_putchar(str[n]);
		}
		else
			continue;
	}
	_putchar(10);
}
