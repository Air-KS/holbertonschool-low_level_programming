#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @dest: pointer
 * @src: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, lenght = 0;

	while (dest[index++])
	{
		lenght++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[lenght++] = src[index];
	}
	return (dest);
}
