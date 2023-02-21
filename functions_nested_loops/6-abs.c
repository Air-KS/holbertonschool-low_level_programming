#include "main.h"

/**
 * _abs - function that computes absolute value of an integer
 * @n: the integer
 *
 * Return: -n if the number is negative or n if else
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
