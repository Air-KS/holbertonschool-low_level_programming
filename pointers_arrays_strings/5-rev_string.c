#include "main.h"

/**
 * rev_string - print revers
 * @s: - revers
 */

void rev_string(char *s)
{
	int lengh = 0, l = 0;
	char tempo;

	while (s[l++])
	{
		lengh++;
	}

	for (l = lengh - 1; l >= lengh / 2; l--)
	{
		tempo = s[l];
		s[l] = s[lengh - l - 1];
		s[lengh - l - 1] = tempo;
	}
}

