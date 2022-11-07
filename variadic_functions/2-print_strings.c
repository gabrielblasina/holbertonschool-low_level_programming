#include "variadic_functions.h"
/**
 * print_strings - function that print strings
 * Return: void
 * @separator: string to be printed between the strings
 * @n: number of strings to be printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int cont;
	char *string;
	va_list pstr;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(pstr, n);
	for (cont = 0 ; cont < n ; cont++)
	{
		string = va_arg(pstr, char*);
		if (cont != 0)
		{
			printf("%s", separator);
		}
		if (string != NULL)
		{
			printf("%s", string);
			string++;
		}
		else
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(pstr);
}
