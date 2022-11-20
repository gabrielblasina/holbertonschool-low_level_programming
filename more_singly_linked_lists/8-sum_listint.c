#include "lists.h"
/**
 * sum_listint - function to sum all data of a list
 * Return: sum of data of the linked list
 * @head: pointer to the first node of a linked list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
