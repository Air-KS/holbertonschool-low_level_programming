#include "main.h"
#include <stdlib.h>

/**
* *create_array - function that creates an array of chars, and initializes it with a specific char.
* @size: taille
* @c: variable
* 
* Return: array
*/

char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int index = 0;

    if (size == 0)
        return NULL;

    array = malloc(size * sizeof(char));
    if (array == NULL)
        return NULL;

    for (index = 0; index < size; index++)
        array[index] = c;

    return array;
}