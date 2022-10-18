#include "main.h"
/**
 * _memset - entry point
 * Return: pointer s
 * @s: pointer to char
 * @b: variable type char
 * @n: variable type unsigned int
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
