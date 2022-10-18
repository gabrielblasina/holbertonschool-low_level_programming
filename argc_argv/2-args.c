#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 * @argc: argument
 * @argv: argument
*/
int main(int argc, char **argv)
{
	int cont;

	for (cont = 0 ; cont < argc ; cont++)
	{
		printf("%s\n", argv[cont]);
	}
	return (0);
}
