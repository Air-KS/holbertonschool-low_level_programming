#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument
 * @argv: argument multi
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int numberOne = atoi(argv[1]);
	int numberTwo = atoi(argv[2]);

	int resultat = numberOne * numberTwo;

	if (argc != 3)
	{
		printf("Erreur\n");
		return (1);
	}
	printf("%d\n", resultat);
	return (0);
}

