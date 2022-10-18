#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 * @argc: atribute
 * @argv: atribute
*/
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
