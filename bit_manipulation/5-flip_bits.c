#include "main.h"

/**
* flip_bits - Retourne le nombre de bits que vous devez inverser
*			pour passer d'un nombre à un autre.
* @n: Premier nombre
* @m: Deuxième nombre
*
* Return: Le nombre de bits que vous devez inverser pour passer de n à m
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m; /* Fait le XOR entre les deux nombres */
	unsigned int count = 0;

	/* Incrémente le compteur pour chaque bit différent entre n et m */
	while (xor > 0)
	{
		/* Vérifie si le dernier bit est différent et l'ajoute au compteur */
		count += xor & 1;
		/* Décale le nombre vers la droite pour comparer le bit suivant */
		xor >>= 1;
	}

	return (count);
}
