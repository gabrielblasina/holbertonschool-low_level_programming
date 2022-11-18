#include "lists.h"
/**
 * free_list - function to free a sigly linked lists
 * Return: void
 * @head: pointer to singly linked lists
*/
void free_list(list_t *head)
{
	list_t *deleteaux;

	while (head)
	{
		deleteaux = head;
		free(deleteaux->str);
		head = head->next;
		free(deleteaux);
	}
	free(head);
}
