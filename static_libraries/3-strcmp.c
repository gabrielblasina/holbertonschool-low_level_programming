#include "main.h"

/**
 * _strcmp - strcmp
 *
 * @s1: Primer String
 * @s2: Segundo String
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int aux;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) - *(s2 + i))
		{
			aux = *(s1 + i)	- *(s2 + i);
			return (aux);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			aux = *(s1 + i) - *(s2 + i);
			return (aux);
		}
		i += 1;
	}
	return (0);
}
