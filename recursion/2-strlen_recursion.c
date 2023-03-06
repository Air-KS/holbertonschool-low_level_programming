#include "main.h"

/**
 * _strlen_recursion - Renvoie la longueur d'une chaîne de caractères.
 * @s: La chaîne de caractères à évaluer.
 *
 * Return: La longueur de la chaîne.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
