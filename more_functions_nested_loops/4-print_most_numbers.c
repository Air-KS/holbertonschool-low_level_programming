#include "main.h"

/**
 * print_most_numbers - Fonction qui affiche de 0 à 9 sans le 2 et 4
 *
 *
 * Return: Always
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
		{
			num++;
		}
		_putchar(num);
	}
	_putchar('\n');
}
