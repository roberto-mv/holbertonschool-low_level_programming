#include "lists.h"

/**
 * add_nodeint - Adds new node
 * @head: Head
 * @n: Value new element
 *
 * Return: New node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
