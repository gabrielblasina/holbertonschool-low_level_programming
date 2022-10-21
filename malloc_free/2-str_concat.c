#include <stdlib.h>
/**
 * str_concat - funcion to concatenates two strings
 * Return: NULL (if empty string or failure) ptr (is success)
 * @s1: string
 * @s2: string
*/
char *str_concat(char *s1, char *s2)
{
	int i, x, w, y;
	char *pdest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	for (x = 0 ; s2[x] != '\0' ; x++)
		;
	pdest = malloc((i + x + 1) * sizeof(char));
		if (pdest == NULL)
			return (NULL);
		for (w = 0 ; s1[w] != '\0' ; w++)
		{
			pdest[w] = s1[w];
		}
		for (y = 0 ; s2[y] != '\0' ; y++)
		{
			pdest[w] = s2[y];
			w++;
		}
		return (pdest);
}
