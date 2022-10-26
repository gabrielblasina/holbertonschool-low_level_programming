#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates an array of n elements and returns pointer
 * Return: NULL (if nmemb or size is 0 or if malloc fails)
 * @nmemb: unsigned int
 * @size: unsigned int
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int cont;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (cont = 0 ; cont < (nmemb * size) ; cont++)
		p[cont] = 0;
	return (p);
}
