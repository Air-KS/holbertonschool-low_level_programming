#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination
 * @src: source
 * @n: n
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
	{
		destination[index] = source[index];
	}
	return (dest);
}
