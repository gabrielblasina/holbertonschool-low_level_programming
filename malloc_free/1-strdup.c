#include <stdlib.h>
/**
 * _strdup - entry point
 * Return: NULL (str is NULL) p2str (success)
 * @str: string
*/
char *_strdup(char *str)
{
	int i;
	int x;
	char *p2str;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
	p2str = malloc(i * sizeof(char));
	if (p2str == NULL)
		return (NULL);
	for (x = 0 ; str[x] != '\0' ; x++)
	{
		if (x < i)
		{
			p2str[x] = str[x];
		}
	}
	return (p2str);
}
