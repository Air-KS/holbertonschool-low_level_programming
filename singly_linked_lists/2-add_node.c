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
* add_node - function that adds a new node
* @head: pointer to pointer
* @str: takes in a string
* Return: pointer to the head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *test_free;

	if (head == NULL)
		return (0);
	

	new_node = malloc (sizeof(list_t));

	if (new_node == NULL)
		return (0);

	test_free = strdup(str);

	if (test_free == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->str = test_free;
	new_node->len = get_length(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

