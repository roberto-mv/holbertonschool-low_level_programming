#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node
 * @head: Head
 * @index: node to get
 *
 * Return: Pointer to the node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx;

	for (idx = 0; head != NULL; head = head->next, idx++)
	{
		if (idx == index)
			return (head);
	}

	return (NULL);
}
