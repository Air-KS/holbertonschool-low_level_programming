#include "main.h"

/**
*
*
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *memoire;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	memoire = ptr;
	
	for (index = 0; index < (size * nmemb); index++)
	memoire[index] = '\0';

	return (ptr);
}
