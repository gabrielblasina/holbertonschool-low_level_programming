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
	int num1;
	int num2;
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}

