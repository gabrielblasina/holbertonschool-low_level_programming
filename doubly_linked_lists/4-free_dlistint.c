#include "lists.h"
/**
 * free_dlistint - function to free a sigly linked lists
 * Return: void
 * @head: pointer to singly linked lists
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *deleteaux;

	while (head)
	{
		deleteaux = head;
		head = head->next;
		free(deleteaux);
	}
	free(head);
}
