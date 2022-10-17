#include "main.h"
/**
 * _strlen_recursion - recursive function
 * Return: length
 * @s: string (parameter given)
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
