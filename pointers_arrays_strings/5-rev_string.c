#include "main.h"
/**
 * rev_string - entry point
 * Return - void
 * @s: variable
*/
void rev_string(char *s)
{
	int i;
	int length;
	char temp;

	for (length = 0 ; s[length] != '\0' ; length++)
	{
	}
	for (i = 0 ; i < (length / 2) ; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
