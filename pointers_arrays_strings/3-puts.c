#include "main.h"
/**
 * _puts - entry point
 * Return: void
 * @str: variable
*/
void _puts(char *str)
{
	int n;

	for (n = 0 ; str[n] != '\0' ; n++)
	{
		_putchar(str[n]);
	}
	_putchar(10);
}
