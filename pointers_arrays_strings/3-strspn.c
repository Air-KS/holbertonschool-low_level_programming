#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string check
 * @accept: string check agains
 *
 * Return: (index)
 */

unsigned int _strspn(char *s, char *accept)
{
	int lenght = 0;
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (lenght = 0; accept[lenght]; lenght++)
		{
			if (s[index] == accept[lenght])
			{
				break;
			}
		}
		if (accept[lenght] == '\0')
		{
			break;
		}

	}
	return (index);
}
