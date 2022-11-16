#include "lists.h"
/**
 * print_list - function to print lists
 * Return: counter
 * @h: pointer to struct
*/
size_t print_list(const list_t *h)
{
	int counter = 0;

	do {
		if (h->len && h->str)
			printf("[%d]", h->len);
		if (h->str)
			printf(" %s\n", h->str);
		else
			printf("[0] (nil)\n");
		counter++;
		h = h->next;
	} while (h);
	return (counter);
}
