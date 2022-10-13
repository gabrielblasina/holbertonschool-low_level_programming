#include "main.h"
/**
 * print_chessboard - entry point
 * Return: void
 * @a: pointer
*/
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0 ; x <= 7 ; x++)
	{
		for (y = 0 ; y <= 7 ; y++)
		{
			printf("%c", a[x][y]);
		}
		printf("\n");
	}
}
