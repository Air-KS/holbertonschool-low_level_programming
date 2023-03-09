#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argument
 * @argv: arument value
 *
 * Return: Always 1 or 0
 */

int main(int argc, char *argv[])
{
	int num = 0, sum = 0, digit = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
