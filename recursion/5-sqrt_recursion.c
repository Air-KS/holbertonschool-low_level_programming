#include "main.h"

/**
 * racine - search the square number
 * @n: Number one
 * @index: racine of the number
 *
 * Return: Square of number
 */

int racine(int n, int index)
{
	if (index * index > n)
		return (-1);

	if (index * index == n)
		return (index);

	return (racine(n, index + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: parameter
 *
 * Return: natural square root of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (racine(n, 0));
}
