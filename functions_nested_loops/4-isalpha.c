#include "main.h"
/**
 * _isalpha - Entry point
 * Return: 1 (Letters) 0 (Others)
 * @c: Variable
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
