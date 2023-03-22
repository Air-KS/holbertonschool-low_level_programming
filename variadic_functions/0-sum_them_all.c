#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: integer
*
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0; /* Initialise la somme à 0 */
	unsigned int index;

	/* Initialise la Variable args */
	va_list arguments;

	if (n == 0)
	{
		return (0);
	}

	/* Initialise la Variable args */
	va_start(arguments, n);
	/* Boucle à travers chaque argument variable */
	for (index = 0; index < n; index++)
	{
		/* Ajoute l'argument courant à sum */
		sum += va_arg(arguments, int);
	}
	va_end(arguments); /* Termine la list d'argument variable */

	return (sum);
}
