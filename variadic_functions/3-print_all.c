#include "variadic_functions.h"

/**
* print_all - Function that prints anything
* @format: Une liste de type arguments passé à la fonction
*			c: char
*			i: entier
*			f: floattant (On utilise double pour double précision)
*			s: Chaine de Caractère *
*				(si la chaîne est NULL, afficher (nil).
*				tout autre caractère doit être ignoré.
*/

void print_all(const char * const format, ...)
{
	int index = 0;
	char *string;
	va_list argument;

	va_start(argument, format); /* Initialise la liste des arguments variable */

	while (format && format[index])
	{
		switch (format[index])
/* Récupère le prochain argument de type et l'affiche comme un caractère */
		{
			case 'c':
				printf("%c", va_arg(argument, int)); /* Type int */
			break;
			case 'i':
				printf("%d", va_arg(argument, int)); /* Type int */
			break;
			case 'f':
				printf("%f", va_arg(argument, double)); /* Type double */
			break;
			case 's':
				string = va_arg(argument, char *);
				if (string == NULL) /* Si la chaine est Null Affiche (nil) */
				{
					printf("(nil)");
					break; /* Sortir et passé à l'iteration suivante */
				}
				printf("%s", string); /* Sinon, affiche la chaines */
				break;
			default:
			index++;
			continue; /* Ignore tout autre caractère */
		}
		if (format[index + 1] != '\0')
		printf(", ");
		index++;
	}
	va_end(argument); /* Libérer les ressources utilisées par la liste */
	printf("\n");
}
