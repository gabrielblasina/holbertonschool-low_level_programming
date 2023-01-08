#include "search_algos.h"
void print_array(const int *array, size_t start, size_t end);
/**
 * binary_search - function to search for a value using binary search
 * Return: index where value is located (in success)
 * -1 (if value is not present or array is NULL)
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, half;

	if (array)
	{
		while (start <= end)
		{
			printf("Searching in array: ");
			print_array(array, start, end);
			half = (end - start) / 2 + start;
			if (array[half] > value)
				end = half - 1;
			else if (array[half] < value)
				start = half + 1;
			else
				return (half);
		}
	}
	return (-1);
}
/**
 * print_array - adapted function of previous project to print an array
 * Return: void
 * @array: pointer to the start of the array
 * @start: starting point
 * @end: last point
*/
void print_array(const int *array, size_t start, size_t end)
{
	size_t i = start;

	while (array && i <= end)
	{
	printf("%d", array[i]);
	if (i < end)
		printf(", ");
	i++;
	}
	printf("\n");
}
