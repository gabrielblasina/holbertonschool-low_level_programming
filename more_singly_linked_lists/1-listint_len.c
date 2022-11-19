#include "lists.h"
/**
 * listint_len - counter of elements in a struct
 * Return: count
 * @h:pointer to struct
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *aux;

	if (h)
	{
		for (aux = h ; aux->next ; aux = aux->next)
		{
			count++;
		}
	}
	if (aux->next == NULL)
		count++;
	return (count);
}
