#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: integer
*
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int index;
	va_list arguments;

	if (n == 0)
	{
		return (0);
	}

	va_start(arguments, n);
	for (index = 0; index < n; index++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);

	return (sum);
}
