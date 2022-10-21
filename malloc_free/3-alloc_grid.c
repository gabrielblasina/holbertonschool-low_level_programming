#include <stdlib.h>
/**
 * alloc_grid - entry point
 * Return: pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
*/
int **alloc_grid(int width, int height)
{
	int x = 0;
	int **ptr;

	if (width == 0 || height == 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (x = 0 ; x < height ; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);
		if (ptr[x] == NULL)
		{
			while (x >= 0)
			{
				free(ptr[x]);
				x--;
			}
			free(ptr);
			return (NULL);
		}

	}
	return (ptr);
}
