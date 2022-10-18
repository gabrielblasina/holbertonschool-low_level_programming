#include "main.h"

/**
 * _strchr -  strchr
 *
 * @s: in the string
 * @c:  first occurrence of the character
 *
 * Return: Returns NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (0);
}
