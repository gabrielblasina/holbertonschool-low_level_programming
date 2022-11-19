#include "lists.h"
/**
 * free_listint2 - function to free a sigly linked lists
 * Return: void
 * @head: pointer to singly linked lists
*/
void free_listint2(listint_t **head)
{
	listint_t *deleteaux;

	if (head == NULL)
		return;

	while (*head)
	{
		deleteaux = *head;
		*head = (*head)->next;
		free(deleteaux);
	}
	*head = NULL;
}
