#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	 dlistint_t *newNode;

	 newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
