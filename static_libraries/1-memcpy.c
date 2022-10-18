#include "main.h"

/**
 * _memcpy -  memcpy
 *
 * @dest: to memory area
 * @src: bytes from memory area
 * @n: function copies
 *
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
