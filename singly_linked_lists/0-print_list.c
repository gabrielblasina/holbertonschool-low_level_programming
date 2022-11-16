#include "lists.h"
/**
 * print_list - function to print lists
 * Return: counter
 * @h: pointer to struct
*/
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			counter++;
			h = h->next;
		}
		printf("[%d]", h->len);
		printf(" %s\n", h->str);
		counter++;
		h = h->next;
	}
	printf("[%d]", h->len);
	printf(" %s\n", h->str);
	counter++;
	return (counter);
}
