#include "main.h"
/**
 * print_diagsums - entry point
 * Return: void
 * @a: pointer
 * @size: variable
*/
void print_diagsums(int *a, int size)
{
	int i;
	int x = 0;
	int y = 0;

	for (i = 0 ; i < size ; i++)
	{
		x = x + a[i * (size + 1)];
		y = y + a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", x, y);
}
