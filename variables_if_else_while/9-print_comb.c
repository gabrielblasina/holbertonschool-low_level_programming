#include<stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	int a = '0';
	int b = ',';
	int c = ' ';

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
		if (a < '9')
		{
			putchar(b);
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
