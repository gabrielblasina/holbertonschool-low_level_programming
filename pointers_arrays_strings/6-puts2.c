#include "main.h"
/**
 * puts2 - entry point
 * Return: void
 * @str: variable
*/
void puts2(char *str)
{
	int n;

	for (n = 0 ; str[n] != '\0' ; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar(10);
}
