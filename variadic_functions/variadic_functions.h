#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/******** Bibliothèque prototypes **********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/******** Function prototypes **********/
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
