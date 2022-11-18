#include "lists.h"
/**
 * list_len - counter of elements in a struct
 * Return: count
 * @h:pointer to struct
*/
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *aux;

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
