#include "main.h"

/**
 * is_prime_number - Vérifier les nombre premier
 * @n: Variable
 *
 * Return: 1
 */

int is_prime_number(int n)
{
	int index;

	if (n <= 1)
	{
		return (0);
	}

	for (index = 2; index < n; index++)
	{
		if (n % index == 0)
		{
			return (0);
		}
	}
	return (1);
}
