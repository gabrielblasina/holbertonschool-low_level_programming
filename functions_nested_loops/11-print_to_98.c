#include "main.h"
/**
 * print_to_98 - entry point
 * Return: void
 * @n: variable
*/
void print_to_98(int n)
{

	if (n > 98)
	{
		do {
			printf("%d, ", n);
			n--;
		} while (n > 98);
	}
	if (n < 98)
	{
		do {
			printf("%d, ", n);
			n++;
		} while (n < 98);
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
