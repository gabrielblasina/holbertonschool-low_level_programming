#include "main.h"
/**
 * _strlen - function to know length of an array
 * Return: length of the array
 * @s: variable
*/
int _strlen(char *s)
{
	int n;

	for (n = 0 ; s[n] != '\0' ; n++)
		;
	return (n);
}
/**
 * _strcpy - entry point
 * Return: the pointer to @dest
 * @dest: array
 * @src: array
*/
char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i;

	for (i = 0 ; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
