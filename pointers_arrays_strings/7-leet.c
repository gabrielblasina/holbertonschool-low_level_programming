#include "main.h"
/**
 * leet - entry point
 * Return: str
 * @str: variable pointer
*/
char *leet(char *str)
{
	int i;
	int x;
	char alp[] = {'a', 'A', 'e', 'E', 'o', 'O', 'l', 'L', 't', 'T'};
	char num[] = {'4', '4', '3', '3', '0', '0', '1', '1', '7', '7'};

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (x = 0 ; x <= 9 ; x++)
		{
			if (str[i] == alp[x])
			{
				str[i] = num[x];
			}
		}
	}
	return (str);
}
