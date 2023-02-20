#include <stdio.h>

/**
 * main - Fonction principal
 *
 * Return: 0
 */


int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			a++;
		}
		putchar(a);
	}
	putchar('\n');

	return (0);

}
