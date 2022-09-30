#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char a_z;

	do {

		for (a_z = 'a' ; a_z <= 'z' ; a_z++)
		{
			_putchar(a_z);
		}
		_putchar('\n');
		i++;
	} while (i < 10);
}
