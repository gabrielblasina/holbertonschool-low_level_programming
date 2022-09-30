#include "main.h"
/**
*_islower - Entry point
*Return: 1 (Lowercase) 0 (Uppercase)
*@c: Variable
*/

int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
