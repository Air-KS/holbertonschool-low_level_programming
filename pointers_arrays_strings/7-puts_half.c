#include "main.h"

/**
 * puts_half - Function that prints half of a string.
 * @str: String
 */

void puts_half(char *str)
{
	int index;
	int lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	for (index = 5; index < lenght; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
