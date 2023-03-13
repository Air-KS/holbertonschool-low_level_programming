#include "main.h"

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * @str: The string to be copied.
 *
 * Return: If str == NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, lenght = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		lenght++;
	}

	duplicate = malloc(sizeof(char) * (lenght + 1));

	if (duplicate == NULL)
	{
	return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
	duplicate[index] = str[index];
	}
	duplicate[lenght] = '\0';

return (duplicate);
}
