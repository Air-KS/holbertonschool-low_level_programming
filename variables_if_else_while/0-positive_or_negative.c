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

	/* Si c'est suppérieur à Zero */
	if (n > 0)
		printf("%d is positive\n", n);

	/* Si c'est inférieur à Zero */
	if (n < 0)
		printf("%d is negative\n", n);

	/* Si c'est strictement egale à zero */
	if (n == 0)
		printf("%d is zero\n", n);

	return (0);

}
