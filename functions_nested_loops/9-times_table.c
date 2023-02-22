#include "main.h"

/**
 * times_table - Affiche la table de multiplication de 0 à 9
 *
 * Return: void
 */

void times_table(void)
{
	int ligne, colonne, product;

	for (ligne = 0; ligne <= 9; ligne++)
	{
		for (colonne = 0; colonne <= 9; colonne++)
		{
			product = ligne * colonne;

			if (colonne == 0)
			{
				_putchar('0' + product);
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
