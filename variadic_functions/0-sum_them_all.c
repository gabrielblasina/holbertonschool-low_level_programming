#include "variadic_functions.h"
/**
 * sum_them_all - sum all the parameters given
 * Return: 0 (if n == 0) sum (result of the parameter's sum if success)
 * @n: numbers of parameters to sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int cont;
	va_list sta;

	if (n == 0)
	{
		return (0);
	}
	va_start(sta, n);
	for (cont = 0 ; cont < n ; cont++)
	{
		sum += va_arg(sta, int);
	}
	va_end(sta);
	return (sum);
}
