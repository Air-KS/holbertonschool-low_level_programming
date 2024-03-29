#include "lists.h"

/**
* get_dnodeint_at_index - Function that returns the nth node of a dlistint_t
* @head: Pointer
* @index: Index
*
* Return: node
*/

	dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i;

	for (i = 0; node != NULL && i < index; i++)
	{
		node = node->next;
	}

	if (node == NULL)
	{
		return (NULL);
	}

	return (node);
}
