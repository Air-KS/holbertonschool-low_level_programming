#include "lists.h"

/**
* free_list - free list head
* @head: list head
*
*/

void free_list(list_t *head)
{
	list_t *freeNode;

	while (head)
	{
		freeNode = head;
		head = freeNode->next;
		free(freeNode->str);
		free(freeNode);

	}
}
