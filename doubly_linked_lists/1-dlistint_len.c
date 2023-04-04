#include "lists.h"

/**
* dlistint_len - function that returns the number of elements
* @h: Pointer
*
* Return: counter
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter += 1;
		h = h->next;
	}
	return (counter);
}
