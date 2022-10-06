#include "main.h"
/**
 * swap_int - entry point
 * Return: void
 * @a: parameter
 * @b: parameter
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

