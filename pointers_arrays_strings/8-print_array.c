#include "main.h"
#include <stdio.h>
/**
 * print_array - entry point
 * Return: void
 * @a: start of array
 * @n: length of array
*/
void print_array(int *a, int n)
{
	int count;

	for (count = 0 ; count < n ; count++)
	{
		if (count == n - 1)
		{
			printf("%d", a[count]);
		}
		else
		{
			printf("%d, ", a[count]);
		}
	}
	printf("\n");
}