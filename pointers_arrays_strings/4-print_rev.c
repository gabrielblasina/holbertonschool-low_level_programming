#include "main.h"
/**
 * print_rev - entry point
 * Return: void
 * @s: variable
*/
void print_rev(char *s)
{
	int n;

	for (n = 0 ; s[n] != '\0' ; n++)
	{
	}
	n--;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
		_putchar(10);
}
