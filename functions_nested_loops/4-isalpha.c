#include "main.h"

/**
 * _isalpha - function that check if the character is in lowercase
 * @c: the character bring checked
 *
 * Return: 1 and 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
