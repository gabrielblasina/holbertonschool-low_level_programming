#include "lists.h"
/**
 * add_nodeint - function to add a node at the beggining of a list
 * Return: NULL, if fails. Or *head, if success
 * @head: pointer to pointer to struct
 * @n: integer
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
