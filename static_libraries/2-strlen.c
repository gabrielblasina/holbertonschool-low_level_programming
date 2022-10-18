#include "main.h"
/**
 * _strlen - This report, by its very length, defends itself against the risk
 *
 * @s: The string to get the length of.
 *
 * Return: The length of @str.
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
		return (a);
}
