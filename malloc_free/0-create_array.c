#include <stdlib.h>
/**
 * create_array - entry point
 * Return: NULL (size = 0 or function fails) pointer to array (success)
 * @size: int variable
 * @c: char variable
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size <= 0)
	{
		return (NULL);
	}
	str = malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (str);
	}
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
