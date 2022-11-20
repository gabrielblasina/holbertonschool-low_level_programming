#include "lists.h"
/**
 * pop_listint - function that deletes the head node on linked list
 * Return: 0 (if linked list is empty) n_cpy (if success)
 * @head: pointer to pointer to the first node
*/
int pop_listint(listint_t **head)
{
	listint_t *aux_node = NULL;
	int n_cpy = 0;

	if (head == NULL || *head == NULL)
		return (0);
		aux_node = (*head)->next;
		n_cpy = (*head)->n;
		free(*head);
		*head = aux_node;
		return (n_cpy);
}
