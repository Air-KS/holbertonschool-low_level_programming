#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list.
* @h: pointer const to structur list_t
*
* Return: counter
*/

size_t print_list(const list_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		counter++;
		h = h->next;
	}

	return (counter);
}
