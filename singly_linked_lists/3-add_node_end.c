#include "lists.h"
#include "2-add_node.c"
list_t *add(const char *str);
/**
 * add_node_end - function to add a node at the end
 * Return: NULL (if fails) adress of new node (if success)
 * @head: pointer to pointer
 * @str: const string
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *auxiliar = *head;

	if (!*head)
	{
		*head = add_node(head, str);
		return (*head);
	}
	while (auxiliar->next)
	{
		auxiliar = auxiliar->next;
	}
	new_node = add(str);
	auxiliar->next = new_node;
	return (new_node);
}

/**
 * add - function to add a node at the beggining of a list
 * Return: NULL, if fails. Or *head, if success
 * @str: string
*/
list_t *add(const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	return (new_node);
}
