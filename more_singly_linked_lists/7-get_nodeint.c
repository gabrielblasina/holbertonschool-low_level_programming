#include "lists.h"
/**
 * get_nodeint_at_index - function to return a node at a given index
 * Return: head (if success) NULL (if node does not exist)
 * @head: pointer to first node
 * @index: place to return head
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cntr = 0;

	while (cntr < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		cntr++;
	}
	return (head);
}
