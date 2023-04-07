#include "main.h"

/**
* clear_bit - Sets the bit at the specified index to 0 in the variable n
* @n: Pointer to the variable to modify
* @index: Index of the bit to set to 0 (starting from 0)
*
* Return: 1 if the function succeeded, -1 if the index is invalid
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Vérifier si l'index est valide */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Index invalide */
	}

	/*Mettre le bit à 0 en utilisant des opérations bit à bit */
	*n &= ~(1UL << index);

	/* Retourner 1 pour indiquer que la fonction a réussi */
	return (1);

/*
* 1UL est un entier littéral de type unsigned long int avec un seul bit à 1.
* On décale ce bit à gauche de index positions <<
* pour créer un masque binaire
* avec un seul bit à 1 à l'index spécifié.
* On utilise l'opérateur de négation binaire ~ pour inverser tous les bits du
* masque et obtenir un masque avec un seul bit à 0 à l'index spécifié.
* On combine ensuite ce masque avec la variable n en utilisant l'opérateur de
* AND binaire &= pour mettre le bit correspondant à
* 0 sans modifier les autres bits.
*/

}
