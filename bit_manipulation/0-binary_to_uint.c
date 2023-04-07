#include "main.h"

/**
*
*
*
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		result <<= 1;

		if (b[index] == '1')
			result += 1;
		
		index++;
	}

	return (result);
}
