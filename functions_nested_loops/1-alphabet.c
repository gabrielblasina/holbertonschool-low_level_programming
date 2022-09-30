#include "main.h"
/**
 *print_alphabet - Entry point
 *Return: 0 (Success)
 */
void print_alphabet(void)
{
	char a_z;

	for (a_z = 'a' ; a_z <= 'z' ; a_z++)
	{
		_putchar(a_z);
	}
		_putchar('\n');
}
