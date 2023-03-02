#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: pointer
 * Return: str
 *
 */

char *cap_string(char *str)
{
	int index = 0;

	for (; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (str[index - 1] == ' ' || str[index - 1] == '\n' ||
			str[index - 1] == '\t' || str[index - 1] == '.' ||
			str[index - 1] == ',' || str[index - 1] == '!' ||
			str[index - 1] == '?' || str[index - 1] == '(' ||
			str[index - 1] == ')' || str[index - 1] == '{' ||
			str[index - 1] == '}' || str[index - 1] == '"' ||
			str[index - 1] == '-' || str[index - 1] == ';' ||
			index == 0)
			str[index] -= 32;
		}
	}
	return (str);
}
