#include "lists.h"
/**
 * print_dlistint - function to print integer lists
 * Return: counter
 * @h: pointer to struct
*/
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;
	const dlistint_t *aux;

	for (aux = h ; aux ; aux = aux->next)
	{
		printf("%d\n", aux->n);
		counter++;
	}
	return (counter);
}
