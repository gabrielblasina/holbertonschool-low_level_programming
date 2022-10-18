#include "main.h"
/**
 * _puts - I do not fear computers. I fear the lack of them
 *
 * @str: prints a string
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
