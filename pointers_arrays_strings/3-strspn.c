#include "main.h"
/**
 * _strspn - entry point
 * Return: count
 * @s: array
 * @accept: array
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int x;

	for (i = 0 ; s[i] != ' ' ; i++)
	{
		for (x = 0 ; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[i])
			{
				count++;
			}
		}
	}
	return (count);
}
