#include "main.h"
/**
 * cap_string - entry point
 * Return: ptr
 * @ptr: variable pointer
*/
char *cap_string(char *ptr)
{
	int i;
	int x;
	char str[13] = {9, 10, 32, 44, 46, 59, 33, 34, 63, 40, 41, 123, 124};

	if ((ptr[0] <= 122) && (ptr[0] >= 97))
	{
		ptr[0] = ptr[0] - 32;
	}
	for (i = 0 ; ptr[i] != '\0' ; i++)
	{

		for (x = 0 ; x <= 12 ; x++)
		{
			if (ptr[i] == str[x] && (((ptr[i + 1]) <= 122) && (ptr[i + 1] >= 97)))
			{
				ptr[i + 1] = (ptr[i + 1] - 32);
			}
		}
	}
	return (ptr);
}
