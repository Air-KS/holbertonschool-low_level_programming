#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/******** Bibliothèque prototypes **********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/******** Function prototypes **********/
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
