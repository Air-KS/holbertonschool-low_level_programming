#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Fonction principal
 * Description - Obtenir un nombre aléatoir, puis affichez-le
 *
 * Return: 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = % 5;
	if (n > 5)
		printf("Last digit of %d is greater than 5\n", n);
	if (n < 5)
		printf("Last digit of %d is less than 6 and not 0\n", n);
	if (n == 0)
		printf("Last digit of %d is 0\n", n);
	return (0);
}
