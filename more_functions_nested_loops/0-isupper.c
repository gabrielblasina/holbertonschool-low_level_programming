#include "main.h"
/**
 * _isupper - entry poit
 * Return: 1 (uppercase) 0 (otherwise)
 * @c: variable
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
