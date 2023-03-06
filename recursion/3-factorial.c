#include "main.h"

/**
 * factorial - Renvoie la factorielle d'un nombre donné.
 * @n: Le nombre dont on veut calculer la factorielle.
 *
 * Return: La factorielle de n, ou -1 en cas d'erreur.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
