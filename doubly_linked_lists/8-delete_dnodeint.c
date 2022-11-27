#include "lists.h"
/**
 * delete_dnodeint_at_index - functiont to delete a node from a given index
 * Return: (1) if success (-1) if fails
 * @head: pointer to pointer to first node
 * @index: given node index to delete
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	dlistint_t *nodecpy = *head;
	unsigned int cont = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = nodecpy->next;
		free(nodecpy);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	index -= 1;
	while (aux && cont != index)
	{
		cont++;
		aux = aux->next;
	}
	if (cont == index && aux)
	{
		nodecpy = aux->next;
		if (nodecpy->next)
		nodecpy->next->prev = aux;
		aux->next = nodecpy->next;
		free(nodecpy);
		return (1);
	}
	return (-1);
}
