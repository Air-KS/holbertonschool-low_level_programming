#include <stdio.h>

/**
 * main - Fonction void
 * Utilisez la fonction `putchar` pour imprimer l'alphabet.
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
