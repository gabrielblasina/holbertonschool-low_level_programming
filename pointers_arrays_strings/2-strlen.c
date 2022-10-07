#include "main.h"
/**
 * _strlen - entry point
 * Return: length
 * @s: variable
*/
int _strlen(char *s)
{
	int n;

	for (n = 0 ; s[n] != '\0' ; n++)
		;
	return (n);
}
