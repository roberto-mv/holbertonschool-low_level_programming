#include "lists.h"

/**
 * dlistint_len - Number of elements
 * @h: Head
 *
 * Return: Number of elements
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t ele;

	for (ele = 0; h != NULL; h = h->next, ele++)
		;

	return (ele);
}
