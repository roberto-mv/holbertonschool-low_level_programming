#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints elements of the list
 * @h: Head of the list
 * Return: Numbers
 **/
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h; i++)
	{
		printf("[%u] %s\n", (h->str != NULL) ? h->len : 0,
				(h->str != NULL) ? h->str : "(nil)");
		h = h->next;
	}

	return (i);
}
