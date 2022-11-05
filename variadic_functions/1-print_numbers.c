#include "variadic_functions.h"
/**
 * print_numbers - prints a number followed by a separator
 * Return: void
 * @separator: string
 * @n: number of integers to print
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int cont;
	int nums;
	va_list pnum;

	nums = 0;
	if (separator == NULL)
	{
		separator = " ";
	}
	va_start(pnum, n);
	for (cont = 0 ; cont < n ; cont++)
	{
		nums = va_arg(pnum, int);
		if (cont != 0)
		{
			printf("%s", separator);
		}
		printf("%d", nums);
	}
	printf("\n");
	va_end(pnum);
}

