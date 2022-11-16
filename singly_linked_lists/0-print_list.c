#include "lists.h"
/**
 * print_list - function to print lists
 * Return: counter
 * @h: pointer to struct
*/
size_t print_list(const list_t *h)
{
	int counter = 0;
	const list_t *aux;

	for (aux = h ; aux ; aux = aux->next)
	{
		if (aux->str == NULL)
		{
			printf("[0] (nil)\n");
			counter++;
			aux = aux->next;
		}
		printf("[%d]", aux->len);
		printf(" %s\n", aux->str);
		counter++;
	}
	return (counter);
}
