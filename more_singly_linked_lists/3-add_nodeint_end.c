#include "lists.h"
#include "2-add_nodeint.c"
listint_t *add(const int n);
/**
 * add_nodeint_end - function to add a node at the end
 * Return: NULL (if fails) adress of new node (if success)
 * @head: pointer to pointer
 * @n: integer
*/
listint_t *add_nodeint_end(list_t **head, const int n)
{
	list_t *new_node = NULL;
	list_t *auxiliar = *head;

	if (!*head)
	{
		*head = add_nodeint(head, n);
		return (*head);
	}
	while (auxiliar->next)
	{
		auxiliar = auxiliar->next;
	}
	new_node = add(n);
	auxiliar->next = new_node;
	return (new_node);
}

/**
 * add - function to create a node
 * Return: NULL, if fails. Or *head, if success
 * @n: integer
*/
list_t *add(const int n)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}
