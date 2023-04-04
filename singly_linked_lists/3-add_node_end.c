#include "lists.h"

/**
* get_length - function to count string length
* @str: in string
* Return: returns string length
*/

int get_length(const char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
		continue;

	return (index);
}

/**
* add_node_end - Function that adds a new node at the end of a list_t list.
* @head: Point to head
* @str: String
*
* Return: new_node or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;

	if (!head)
		return (0);

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (0);

	new_node->str = strdup(str);
	new_node->len = get_length(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;

	while (last->next)
	{
		last = last->next;
	}

	last->next = new_node;

	return (new_node);
}
