#include <stdlib.h>
/**
 * string_nconcat - concatenates n bytes of the second string in the first one
 * Return: NULL (function fails)
 * @s1: destiny string
 * @s2: string to be contatenated
 * @n: number of bytes of the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cont1, cont2, cont3, cont4;
	char *pdest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (cont1 = 0 ; s1[cont1] != '\0' ; cont1++)
		;
	for (cont2 = 0 ; s2[cont2] != '\0' ; cont2++)
		;
	if (n < cont2)
		cont2 = n;
	pdest = malloc(1 + (cont1 + cont2) * sizeof(char));
	if (pdest == NULL)
		return (NULL);
	for (cont3 = 0 ; cont3 < cont1 ; cont3++)
	{
		pdest[cont3] = s1[cont3];
	}
	for (cont4 = 0 ; cont4 < cont2 ; cont4++)
	{
		pdest[cont3] = s2[cont4];
		cont3++;
	}
	return (pdest);
}
