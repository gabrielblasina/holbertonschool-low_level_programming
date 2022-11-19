#include "lists.h"
/**
 * free_listint - function to free a sigly linked lists
 * Return: void
 * @head: pointer to singly linked lists
*/
void free_listint(listint_t *head)
{
	listint_t *deleteaux;

	while (head)
	{
		deleteaux = head;
		head = head->next;
		free(deleteaux);
	}
	free(head);
}
