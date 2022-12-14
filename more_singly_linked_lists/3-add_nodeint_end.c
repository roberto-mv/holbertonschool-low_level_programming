#include "lists.h"

/**
 * add_nodeint_end - Adds a new node
 * @head: Head
 * @n: Value new element
 *
 * Return: Adrress of the new element
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	for (; *head != NULL; head = &(*head)->next)
		;
	new->n = n;
	new->next = NULL;
	*head = new;

	return (new);
}
