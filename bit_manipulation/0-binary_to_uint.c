#include "main.h"
/**
 * binary_to_uint - function to convert binary to unsigned int
 * Return: sum
 * @b: string of binary numbers
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int i = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	for ( ; b[len] != '\0' ; len++)
		;
	len -= 1;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		if (b[i] == '1')
			sum += (1 << len);
		i++;
		len--;
	}
	return (sum);
}
