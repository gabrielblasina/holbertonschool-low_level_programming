#include "main.h"
/**
 * puts2 - entry point
 * Return: void
 * @str: variable
*/

void puts2(char *str)
{
	int n;
	int aux;

	for (n = 0; str[n] != '\0' ; n++)
	{
		aux++;
	}
	for (aux = 0 ; str[aux] != '\0' ; aux += 2)
	{
		_putchar(str[aux]);
	}
	_putchar(10);
}
