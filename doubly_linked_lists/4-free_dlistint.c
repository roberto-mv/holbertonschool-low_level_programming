#include "lists.h"

/**
 * free_dlistint - Free list
 * @head: Head
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free((void *) head);
		head = aux;
	}
}
