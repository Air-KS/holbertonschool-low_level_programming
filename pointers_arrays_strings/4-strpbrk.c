#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: bytes
 *
 * Return: '\0'
 */

char *_strpbrk(char *s, char *accept)
{
	int index;
	int lenght;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (lenght = 0; accept[lenght] != '\0'; lenght++)
		{
			if (accept[lenght] == s[index])
			{
				return (s + index);
			}
		}
	}
	return ('\0');
}
