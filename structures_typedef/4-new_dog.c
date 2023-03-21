#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* _strcopy - copy string
* @dest: pointer to test - destination
* @source: pointer to test - Source
*
* Return: dest
*/
char *_strcopy(char *dest, char *source)
{
	int index = 0;

	for (index = 0; source[index] != '\0'; index++)
	{
		dest[index] = source[index];
	}
	dest[index] = '\0';
	return (dest);
}

/**
* new_dog - function that creates a new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Return: NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	/* Alloue de la mémoire pour le nouveau chien */
	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	/* Échec de l'allocation de mémoire */
		return (NULL);

	(*ptr).name = malloc(sizeof(name) + 1);
	if (name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	(*ptr).owner = malloc(sizeof(owner) + 1);
	if ((*ptr).owner == NULL)
	{
		free((*ptr).name);
		free(ptr);
		return (NULL);
	}

	/* Copie les chaînes de caractères pour le nom et le propriétaire */
	_strcopy((*ptr).name, name);
	_strcopy((*ptr).owner, owner);

	/* Définit l'âge */
	(*ptr).age = age;

	return (ptr);
}
