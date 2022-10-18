#include "main.h"

/**
 * _strpbrk - strpbrk
 *
 * @s: the first occurrence in the string s
 * @accept: of any of the bytes in the string accept
 *
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
