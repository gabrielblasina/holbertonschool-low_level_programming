#include "main.h"
/**
 * _strcat - entry point
 * Return: pointer dest
 * @src: source variable
 * @dest: destination variable
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int x;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;
	for (x = 0 ; src[x] != '\0' ; x++)
	{
		dest[i] = src[x];
		i++;
	}
	return (dest);
}
