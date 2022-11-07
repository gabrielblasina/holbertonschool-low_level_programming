#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * Return: void
 * @format: types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	int index = 0;
	va_list pa;
	char *str;

	va_start(pa, format);
	while (format[index])
	{
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(pa, int));
				break;
			case 'i':
				printf("%d", va_arg(pa, int));
				break;
			case 'f':
				printf("%f", va_arg(pa, double));
				break;
			case 's':
				str = va_arg(pa, char*);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
		}
		if ((format[index] == 'c' || format[index] == 'i' ||
			format[index] == 'f' || format[index] == 's')
			&& format[index + 1] != '\0')
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(pa);
}
