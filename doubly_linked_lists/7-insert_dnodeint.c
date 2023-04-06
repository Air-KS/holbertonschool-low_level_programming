#include "lists.h"

/**
* insert_dnodeint_at_index - function that inserts a new node.
* @h: A pointer to the head of the dlistint_t list.
* @idx: The position to insert the new node.
* @n: The integer for the new node to contain.
*
* Return: If the function fails - NULL.
*
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *newNode;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = tmp;
	newNode->next = tmp->next;
	tmp->next->prev = newNode;
	tmp->next = newNode;

	return (newNode);

}
