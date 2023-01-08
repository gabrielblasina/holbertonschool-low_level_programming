#include "search_algos.h"
/**
 * linear_search - function to search for a value in a given array
 * Return: first index where value is located (if success)
 * -1 (if array is NULL or value is not present
 * @array: given array
 * @size: number of elements in the array
 * @value: vaulue to search for
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			if (array[i] == value)
			{
				printf("Value checked array [%ld] = [%d]\n", i, array[i]);
				return (i);
			}
			printf("Value checked array [%ld] = [%d]\n", i, array[i]);
			i++;
		}
	}
	return (-1);
}
