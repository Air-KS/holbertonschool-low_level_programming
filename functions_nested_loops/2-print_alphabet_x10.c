#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int ligne = 0;

	while (ligne < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		ligne++;
		_putchar('\n');
	}

}
