#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * Return: -1 (no match or size <= 0) cont (if success)
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to function
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int cont;

	if (array && cmp)
	{
		for (cont = 0 ; cont < size ; cont++)
		{
			if (size <= 0)
			{
				return (-1);
			}
			if (cmp(array[cont]))
			{
				return (cont);
			}
		}
	}
	return (-1);
}
