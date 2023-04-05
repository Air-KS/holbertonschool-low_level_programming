#include "lists.h"

/**
* add_dnodeint_end - dds a new node at the end of a dlistint_t list
* @head: A pointer to the head
* @n: The integer for the new node
*
* Return: If function fail - NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNodeEnd, *last;

	newNodeEnd = malloc(sizeof(dlistint_t));

	if (!newNodeEnd)
		return (NULL);

	newNodeEnd->n = n;

	if (*head == NULL)
	{
		*head = newNodeEnd;
		newNodeEnd->next = NULL;
		newNodeEnd->prev = NULL;
		return (newNodeEnd);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;

	newNodeEnd->next = NULL;
	newNodeEnd->prev = last;
	last->next = newNodeEnd;

	return (newNodeEnd);

}
