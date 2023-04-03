#include "lists.h"

/**
* list_len - Returns the number of elements in a linked list_t list.
* @h: pointer const to structur list_t
*
* Return: counter
*/

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
