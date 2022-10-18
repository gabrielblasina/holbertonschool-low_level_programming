#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 * @argc: atribute
 * @argv: atribute
*/
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
