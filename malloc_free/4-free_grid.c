#include <stdlib.h>
/**
 * free_grid - function to free memory
 * Return: void
 * @grid: multidimensional array
 * @height: integer variable
*/
void free_grid(int **grid, int height)
{
	int hei;

	if (grid != NULL)
	{
		hei = height;
		while (hei >= 0)
		{
			free(grid[hei]);
			hei--;
		}
		free(grid);
	}
}
