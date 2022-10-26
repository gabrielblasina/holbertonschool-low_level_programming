#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * Return: NULL (min > max or malloc failure) pointer to array (if success)
 * @min: min value
 * @max: max value
*/
int *array_range(int min, int max)
{
	int *pta;
	int cont, dif;

	if (min > max)
		return (NULL);
	pta = malloc((max - min + 1) * sizeof(int));
	if (pta == NULL)
		return (NULL);
	dif = (max - min + 1);
	for (cont = 0 ; cont < dif ; cont++)
	{
		pta[cont] = min;
		min++;
	}
	return (pta);
}
