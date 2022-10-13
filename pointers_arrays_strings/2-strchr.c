#include "main.h"
/**
 * _strchr - entry point
 * Return: 0 (if 'c' is not found) s (if c exist in the array)
 * @c: character
 * @s: array
*/
char *_strchr(char *s, char c)
{
	int n = 0;

	while ((s[n] != c) && (s[n] != '\0'))
	{
		n++;
	}
	if ((s[n] != c) && (s[n] == '\0'))
	{
		return (0);
	}
	return (s + n);
}
