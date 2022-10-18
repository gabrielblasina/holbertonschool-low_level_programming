#include "main.h"

/**
 * _strcat - strcat
 *
 * @dest: string to the dest
 * @src:  at the end of dest
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}
	return (dest);
}
