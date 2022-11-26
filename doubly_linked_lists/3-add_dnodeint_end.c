#include "lists.h"
#include "2-add_dnodeint.c"
/**
 * add_dnodeint_end - function to add a node at the end
 * Return: NULL (if fails) adress of new node (if success)
 * @head: pointer to pointer
 * @n: integer
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *auxiliar = *head;

	if (!*head)
	{
		*head = add_dnodeint(head, n);
		return (*head);
	}
	while (auxiliar->next)
	{
		auxiliar = auxiliar->next;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	auxiliar->next = new_node;
	new_node->prev = auxiliar;
	return (new_node);
}
