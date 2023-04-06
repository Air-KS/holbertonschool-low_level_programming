#include "lists.h"

/**
 * sum_dlistint - Get sum of data in doubly linked list
 * @head: Pointer to head of doubly linked list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n; /* sum = sum + head->n*/
		head = head->next;
	}

	return (sum);
}
