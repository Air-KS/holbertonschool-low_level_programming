#include "main.h"

/**
 * print_rev - Function print revers
 * @s:
 *
 */

void print_rev(char *s)
{

	int lengh = 0;
	int l;

	while (*s != '\0')
	{
		lengh++;
		++s;
	}
	s--;
	for (l = lengh; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
