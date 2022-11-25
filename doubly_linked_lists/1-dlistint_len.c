#include "lists.h"
/**
 * dlistint_len - counter of elements in a struct
 * Return: count
 * @h:pointer to struct
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *aux;

	if (h)
	{
		for (aux = h ; aux->next ; aux = aux->next)
			count++;
	}
	if (aux->next == NULL)
		count++;
	return (count);
}
