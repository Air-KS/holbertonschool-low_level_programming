#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concaténer deux string
* @s1: string 1
* @s2: string 2
* @n: Nombre d'élément
*
* Return: concat_string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_string;
	unsigned int lenght = n, index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		lenght++;

	concat_string = malloc(sizeof(char) * (lenght + 1));

	if (concat_string == NULL)
		return (NULL);

	lenght = 0;

	for (index = 0; s1[index]; index++)
		concat_string[lenght++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat_string[lenght++] = s2[index];

	concat_string[lenght] = '\0';

	return (concat_string);
}
