#include "lists.h"
/**
 * insert_nodeint_at_index - function to create a node at a given index
 * Return: adress of new node (if success) NULL (if fails)
 * @head: pointer to pointer to first node
 * @idx: index where the new node should be added
 * @n: data of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cntr = 0;
	listint_t *auxnode = *head;
	listint_t *newnode = NULL;

	if (*head == NULL)
		return (NULL);
	while (auxnode)
	{
		if (cntr == idx - 1)
		{
			newnode = malloc(sizeof(listint_t));
			if (!newnode)
				return (NULL);
			newnode->n = n;
			newnode->next = auxnode->next;
			auxnode->next = newnode;
			return (newnode);
		}
		if (auxnode->next)
			auxnode = auxnode->next;
		cntr++;
	}
	return (NULL);
}
