#include "lists.h"

/**
 * print_listint - Prints all the elements
 * @h: Head
 *
 * Return: Numbers of elements
 **/
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
	{
		printf("%d\n", h->n);
	}

	return (i);
}
