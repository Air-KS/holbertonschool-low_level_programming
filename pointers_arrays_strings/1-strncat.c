#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer
 * @src: string
 * @n: variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, lenght = 0;

	while (dest[index++] != '\0')
	{
		lenght++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[lenght++] = src[index];
	}
	return (dest);
}
