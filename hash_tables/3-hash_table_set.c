#include "hash_tables.h"

/**
* hash_table_set - Function that adds an element to the hash table.
* @ht: Pointer to the hash_table_t structure representing the hash table.
* @key: Constant character string representing the key.*
* @value: string constant representing the value
*
* Return: 1 of successful or 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode, *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	if (newNode->key == NULL || newNode->value == NULL)
	{
		free(newNode);
		return (0);
	}

	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
