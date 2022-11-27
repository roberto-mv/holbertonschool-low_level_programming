#include "lists.h"

/**
 * sum_dlistint - Sum of all the data
 * @head: Head
 *
 * Return: Sum of all the nodes value
 **/
int sum_dlistint(dlistint_t *head)
{
	int result;

	for (result = 0; head != NULL; head = head->next)
		result += head->n;

	return (result);
}
