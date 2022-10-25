#include "main.h"
#include <stdlib.h>
#include <malloc.h>
/**
 * malloc_checked - entry point
 * Return: px (pointer to allocated memory)
 * @b: unsigned int variable
*/
void *malloc_checked(unsigned int b)
{
	void *px;

	px = malloc(b);
	if (px == NULL)
	{
		exit(98);
	}
	return (px);
}
