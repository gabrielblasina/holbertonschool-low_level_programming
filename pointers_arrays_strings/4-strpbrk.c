#include "main.h"
/**
 * _strpbrk - entry point
 * Return: s + i (if there is a coinsidence) 0 (if no coincidence)
 * @s: array
 * @accept: array
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int x;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (x = 0 ; accept[x] != '\0' ; x++)
		{
			if (accept[x] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
