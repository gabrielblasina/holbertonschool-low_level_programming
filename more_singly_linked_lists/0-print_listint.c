#include "lists.h"
/**
 * print_listint - function to print integer lists
 * Return: counter
 * @h: pointer to struct
*/
size_t print_listint(const listint_t *h)
{
	int counter = 0;
	const listint_t *aux;

	for (aux = h ; aux ; aux = aux->next)
	{
		printf("%d\n", aux->n);
		counter++;
	}
	return (counter);
}
