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
	unsigned int cont;
	listint_t *new;
	listint_t *aux;

	aux = *head;
	if (idx != 0)
	{
		for (cont = 0; cont < idx - 1 && aux != NULL; cont++)
			aux = aux->next;
	}
	if (aux == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = aux->next;
		aux->next = new;
	}
	return (new);
}
