#include "main.h"

/**
 * print_sign - function that check character
 * @n: the character being check
 *
 * Return: 1 if positive, 0 if neutral ans -1 if else
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
