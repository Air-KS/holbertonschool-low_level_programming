#include "main.h"

/**
 * more_numbers - Affichier les chiffres de 0 à 14 sur 10 lignes
 *
 * Return: Always
 */

void more_numbers(void)
{
	int chiffre, nombre;

		for (nombre = 0; nombre <= 9; nombre++)
		{
			for (chiffre = 0; chiffre <= 14; chiffre++)
			{
				if (chiffre >= 10)
				{
					_putchar((chiffre / 10) + '0');
				}
				_putchar((chiffre % 10) + '0');
			}
			_putchar('\n');
		}
}

