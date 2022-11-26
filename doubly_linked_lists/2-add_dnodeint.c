#include "lists.h"
/**
 * add_dnodeint - function to add a node at the beggining of a list
 * Return: NULL, if fails. Or *head, if success
 * @head: pointer to pointer to struct
 * @n: integer
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
