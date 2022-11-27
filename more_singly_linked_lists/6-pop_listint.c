#include "lists.h"

/**
 * pop_listint - Delete head node
 * @head: Head
 *
 * Return: Head nodes
 **/
int pop_listint(listint_t **head)
{
	int n_aux;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = (*head)->next;
	n_aux = (*head)->n;
	free(*head);
	*head = tmp;

	return (n_aux);
}
