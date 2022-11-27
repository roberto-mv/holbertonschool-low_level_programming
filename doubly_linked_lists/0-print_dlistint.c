#include "lists.h"

/**
 * print_dlistint - Print a doubly list
 * @h: Head
 *
 * Return: Number
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; h = h->next, elements++)
		printf("%d\n", h->n);

	return (elements);
}
