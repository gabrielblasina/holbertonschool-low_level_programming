#include "lists.h"
/**
 *
 *
 *
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
