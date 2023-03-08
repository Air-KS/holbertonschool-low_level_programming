#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: variable qui contient le nombre d'argument
 * @argv: Tableau de pointeur, tableau de chaine de caractère
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	argv = argv;

	printf("%d\n", argc - 1);
	return (0);
}
