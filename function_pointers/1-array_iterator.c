#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * Return: void
 * @array: pointer to array of integers
 * @size: size of the array
 * @action: pointer to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int cont;

	if (array && size && action)
	{
		for (cont = 0 ; cont < size ; cont++)
		{
			action(array[cont]);
		}
	}
}
