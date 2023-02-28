#include "main.h"

/**
 * puts2 - print number
 * @str: variable
 *
 */

void puts2(char *str)
{
	int index, lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	for (index = 0; index < lenght; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

