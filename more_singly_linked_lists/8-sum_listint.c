#include "lists.h"

/**
 * sum_listint - Sum of all
 * @head: Head
 *
 * Return: Sum
 **/
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
