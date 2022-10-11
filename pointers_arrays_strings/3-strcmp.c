#include "main.h"
/**
 * _strcmp - entry point
 * Return: Diference between s1 y s2
 * @s1: pointer to char
 * @s2: pointer to char
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
		if ((s1[i] < s2[i]) || (s1[i] > s2[i]))
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
