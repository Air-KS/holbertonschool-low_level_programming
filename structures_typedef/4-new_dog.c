#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	/* Alloue de la mémoire pour le nouveau chien */
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
	/* Échec de l'allocation de mémoire */
		return (NULL);

	/* Copie les chaînes de caractères pour le nom et le propriétaire */
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	/* Définit l'âge */
	new_dog->age = age;

	return (new_dog);
}
