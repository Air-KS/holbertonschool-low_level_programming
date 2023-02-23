#include "main.h"

/**
 * print_line - Fonction qui affichie une ligne droite
 * @n:
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int ligne;

	for (ligne = 0; ligne < n; ligne++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
