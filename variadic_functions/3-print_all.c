#include "variadic_functions.h"

/**
* print_all - Function that prints anything
* @format: Paramettre
*
*/

void print_all(const char * const format, ...)
{
	int index = 0;
	char *string;
	va_list argument;

	va_start(argument, format);

	while (format && format[index])
	{
		switch (format[index])
		{
			case 'c':
			printf("%c", va_arg(argument, int));
			break;

			case 'i':
			printf("%d", va_arg(argument, int));
			break;

			case 'f':
			printf("%f", va_arg(argument, double));
			break;

			case 's':
			string = va_arg(argument, char *);

			while (string == NULL)
			{
				printf("(nil)"); /* Si la chaine est Null Affiche (nil)*/
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
	va_end(argument);
	printf("\n");
}
