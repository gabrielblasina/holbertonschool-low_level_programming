#include "main.h"
/**
 * _abs - Entry point
 * Return: valor de variable
 * @av: variable
*/
int _abs(int av)
{
	if (av < 0)
	{
		return (av * (-1));
	}
	return (av);
}
