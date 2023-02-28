#include "main.h"

/**
 * puts_half - Function that prints half of a string.
 * @str: String
 */

void puts_half(char *str)
{
	int index = 0;
	int lenght = 0;

	while (str[index] != '\0')
	{
		index++;			
	}

	lenght = index / 2;

	if (index % 2 == 1)
	{
		lenght++;
	}

	for (; lenght < index; lenght++)
	{
		_putchar(str[lenght]);
	}
	_putchar('\n');
}
