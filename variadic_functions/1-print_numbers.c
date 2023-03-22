#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_numbers - function that prints numbers, followed by a new line.
* @separator: Pointer
* @n: integer
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list arguments; /* Déclare une variable de type va_list */

	/* Initialise la Variable args */
	va_start(arguments, n);

	/* Boucle à travers chaque Variables */
	for (index = 0; index < n; index++)
	{
		/* Affiche l'argument avec printf */
		printf("%d", va_arg(arguments, int));
		/* Si le séparateur n'est pas NULL */
		if (index < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments); /* Termine la list d'argument variable */
}
