#include "main.h"

/**
* malloc_checked - function that allocates memory using malloc
* @b: size to malloc
*
* Return: ptr
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
