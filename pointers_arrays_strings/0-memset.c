#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer of memory
 * @b: value
 * @n: the size of memory
 * Return: memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s;
	char value = b;

	for (index = 0; index < n; index++)
	{
		memory[index] = value;
	}
	return (memory);
}
