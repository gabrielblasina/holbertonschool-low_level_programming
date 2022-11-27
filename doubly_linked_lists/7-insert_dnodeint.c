#include "lists.h"
/**
 * insert_dnodeint_at_index - function to create a node at a given index
 * Return: adress of new node (if success) NULL (if fails)
 * @head: pointer to pointer to first node
 * @idx: index where the new node should be added
 * @n: data of the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *aux = *head;

	if (idx == 0)
	{
		new_node = add_dnodeint(head, n);
		return (new_node);
	}
	while (idx != 1)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
		idx--;
	}
	if (aux->next == NULL)
	{
		new_node = add_dnodeint_end(head, n);
		return (new_node);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = aux->next;
	new_node->prev = aux;
	aux->next->prev = new_node;
	aux->next = new_node;
	return (new_node);
}
