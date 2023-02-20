#include <stdio.h>
#include <stdlib.h>

/**
 * main - Fonction principal
 *
 * Return: 0
 */

int main(void)
{
	char alpha;
	int nombre;

	for (nombre = '0'; nombre <= '9'; nombre++)
	{
		putchar(nombre);
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
