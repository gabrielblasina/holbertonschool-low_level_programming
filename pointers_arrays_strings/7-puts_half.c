#include "main.h"
/**
 * puts_half - entry point
 * Return: void
 * @str: variable
*/
void puts_half(char *str)
{
	int length2;
	int length;

	for (length = 0 ; str[length] != '\0' ; length++)
	{
	}
	length2 = (length / 2);
	if ((length % 2) == 1)
	{
		length2 = ((length + 1) / 2);
	}
	for ( ; str[length2] != '\0' ; length2++)
	{
		_putchar(str[length2]);
	}
	_putchar(10);
}
