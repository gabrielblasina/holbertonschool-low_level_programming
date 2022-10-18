#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0 (success) 1 (error)
 * @argc: argument
 * @argv: argument
*/
int main(int argc, char **argv)
{
	int x;
	int y;
	int z = 0;

	for (x = 1 ; x < argc ; x++)
	{
		for (y = 0 ; argv[x][y] != 0 ; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		z += atoi(argv[x]);
	}
	printf("%d\n", z);
	return (0);
}

