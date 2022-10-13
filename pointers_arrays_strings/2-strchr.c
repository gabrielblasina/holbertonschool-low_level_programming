#include "main.h"
/**
 * _strchr - entry point
 * Return: 0 (if 'c' is not found) s (if c exist in the array)
 * @c: character
 * @s: array
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if ((s[i] != c) && (s[i] != '\0'))
		{
			s++;
		}
	}
	return (s);
}
