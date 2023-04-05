#include "lists.h"

/**
* free_dlistint - free head
* @head: Pointer
*
*/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
