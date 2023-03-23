#include "variadic_functions.h"

/**
* print_strings - Function that prints strings
* @separator: Pointeur de separator (Virgule)
* @n: chaine de caractère (Jay, Django)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;

	va_list arguments; /* Déclare la list d'argument */

	va_start(arguments, n); /* Initialise la liste d'argument en utilisant n*/

	/* Boucle à travers toutes les chaines de caractère */
	for (index = 0; index < n; index++)
	{
		/* récupère une chaine de caractère depuis la liste d'argument */
		char *string = va_arg(arguments, char *);

		if (string == NULL) /* Si la chaine est NULL */
		{
			printf("(nil)"); /* Affiche (nil) */
		}
		else
			printf("%s", string); /* Sinon affiche la chaine */

		/* Si différent de NULL et que nous sommes à la dernière chaîne */
		if (separator != NULL && index < n - 1)
		{
			printf("%s", separator); /* Affiche le separator */
		}
	}
	printf("\n"); /* Affiche un saut de ligne */

	va_end(arguments); /* Termine la liste d'argument */
}
