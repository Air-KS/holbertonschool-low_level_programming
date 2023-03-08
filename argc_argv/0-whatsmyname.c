#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: variable qui contient le nombre d'argument
 * @argv: Tableau de pointeur, tableau de chaine de caractère
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
