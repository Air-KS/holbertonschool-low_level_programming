#include "main.h"

/**
 * print_square - Print to square
 * @size:
 *
 *Return: Always 0
 */

void print_square(int size)
{
	int horizontal, vertical;

	if (size > 0)
	{
		for (horizontal = 1; horizontal <= size; horizontal++)
		{
			for (vertical = 1; vertical < size; vertical++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
