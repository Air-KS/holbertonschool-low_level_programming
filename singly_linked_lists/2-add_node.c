#include "lists.h"

/**
* get_length - function to count string length
* @str: in string
* Return: returns string length
*/

int get_length (const char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		continue;
	}
	return (length);
}

/**
*
*
*
*
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (0);
	
	new_node = malloc (sizeof(list_t));

	if (new_node == NULL)
		return (0);

	new_node->str = strdup(str);
	new_node->len = get_length(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

