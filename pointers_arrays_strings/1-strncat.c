#include "main.h"
/**
 * _strncat - entry point
 * Return: dest
 * @dest: variable destiny (pointer)
 * @src: variable source (pointer)
 * @n: variable number of bytes
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;
	for (x = 0 ; src[x] != '\0' ; x++)
	{
		if (x < n)
		{
		dest[i] = src[x];
		i++;
		}
	}
	return (dest);
}
