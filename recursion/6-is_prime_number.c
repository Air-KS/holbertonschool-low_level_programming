#include "main.h"

/* prototype */
int optimus_prime(int n, int index);
int is_prime_number(int n);

/**
 * optimus_prime - Prototype, verifier les nombres premiers
 * @n: Variable
 * @index: Variable
 *
 * Return: 1
 *
 */

int optimus_prime(int n, int index)
{
	if (n == index)
		return (1);

	if (n % index == 0)
		return (0);

	return (optimus_prime(n, index + 1));
}

/**
 * is_prime_number - verifier les nombre premier
 * @n: Variable
 *
 * Return: 1
 */

int is_prime_number(int n)
{
	int index = 2;

	if (n <= 1)
		return (0);

	return (optimus_prime(n, index));
}
