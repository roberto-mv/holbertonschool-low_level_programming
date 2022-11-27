#include "lists.h"

/**
 * free_listint2 - Frees list and set head to NULL
 * @head: Head
 **/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	for (; *head != NULL;)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
