#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	int n2c;
	char a_f;

	for (n2c = 48 ; n2c <= 57 ; n2c++)
	{
		putchar(n2c);
	}
	for (a_f = 'a' ; a_f <= 'f' ; a_f++)
	{
		putchar(a_f);
	}
	putchar('\n');
	return (0);
}
