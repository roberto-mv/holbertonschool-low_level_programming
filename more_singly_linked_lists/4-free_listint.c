#include "lists.h"

/**
 * free_listint - Free funtion
 * @head: Head
 **/
void free_listint(listint_t *head)
{
	listint_t *aux;

	for (; head != NULL;)
	{
		aux = head;
		head = head->next;
		free(aux);
	}

}
