#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number
 * @h: Head
 *
 * Return: Number of elements
 **/
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
		;

	return (i);
}
