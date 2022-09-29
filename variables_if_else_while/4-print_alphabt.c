#include <stdio.h>
/**
 *main - Entri point
 *Return: Always 0 (Success)
*/
int main(void)
{
	char abc;
		for (abc = 'a' ; abc <= 'z' ; abc++)
		{
			if (abc == 'e' || abc == 'q')
			{
			}
			else
			{
				putchar (abc);
			}
		}
		putchar ('\n');
		return (0);
}
