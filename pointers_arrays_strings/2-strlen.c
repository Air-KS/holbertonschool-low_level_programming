#include "main.h"

/**
 * _strlen - Function that prints the lengh
 * @s:
 *
 * Return: lengh
 */

int _strlen(char *s)
{
	int lengh = 0;

	for (; *s != '\0'; s++)
	{
		lengh++;
	}
	return (lengh);
}
