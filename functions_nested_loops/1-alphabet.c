#include "main.h"

/**
 * print_alphabet - Fonction
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');

}
