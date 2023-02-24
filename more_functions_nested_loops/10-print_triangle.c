#include "main.h"

/**
 * print_triangle - print a triangle
 * @size:
 *
 * Return: Always
 */

void print_triangle(int size)
{
	int ligne, colonne;

	if (size > 0)
	{
		for (ligne = 1; ligne <= size; ligne++)
		{
			for (colonne = size - ligne; colonne > 0; colonne--)
			{
				_putchar(' ');
			}
			for (colonne = ligne; colonne > 0; colonne--)
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
