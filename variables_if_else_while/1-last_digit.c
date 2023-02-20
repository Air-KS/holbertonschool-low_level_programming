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
	int Nn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Nn = n % 10;

	if (Nn > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, Nn);
	else if (Nn == 0)
		printf("Last digit of %d is %d and is 0\n", n, Nn);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Nn);
	return (0);
}
