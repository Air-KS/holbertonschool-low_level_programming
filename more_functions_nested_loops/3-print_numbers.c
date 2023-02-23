#include "main.h"

/**
 * print_numbers - Fonction
 *
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
