#include "lists.h"
/**
 * add_node - function to add a node at the beggining of a list
 * Return: NULL, if fails. Or *head, if success
 * @head: pointer to pointer to struct
 * @str: string
*/
list_t *add_node(list_t **head, const char *str)
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
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
