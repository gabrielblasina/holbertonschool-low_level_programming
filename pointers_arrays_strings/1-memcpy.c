#include "main.h"
/**
 * _memcpy - entry point
 * Return: pointer dest
 * @dest: pointer to char
 * @src: pointer to char
 * @n: unsigned int
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
