#include "main.h"

/**
 * _islower - function that check if the character is in lowercase
 * @c: the character bring checked
 *
 * Return: 1 and 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

