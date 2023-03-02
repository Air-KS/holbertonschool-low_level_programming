#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @str: pointer
 * Return: str
 */

char *leet(char *str)
{
	int index = 0, idx;
	char leet[8] = {'O', 'L', '-', 'E', 'A', '-', '-', 'T'};

	while (str[index])
	{
		for (idx = 0; idx <= 7; idx++)
		{
			if (str[index] == leet[idx] || str[index] - 32 == leet[idx])
			{
				str[index] = idx + '0';
			}
			index++;
		}
	}
	return (str);
}
