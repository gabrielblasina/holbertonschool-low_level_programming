#include "main.h"
/**
* _strncpy - entry point
* Return: dest (pointer)
* @dest: pointer
* @src: pointer
* @n: variable
*/
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0 ; src[x] != '\0' ; x++)
	{
		if (x < n)
		{
		dest[x] = src[x];
		}
	}
	for ( ; x < n ; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
