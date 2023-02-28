#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: pointer
 *
 * Return: num * signe
 */

int _atoi(char *s)
{
	int signe = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			signe *= -1;
		
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		
		else if (num > 0)
			break;
	} while (s++);

	return (num * signe);
}
