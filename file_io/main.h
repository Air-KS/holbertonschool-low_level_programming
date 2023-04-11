#ifndef PROTOTYPE_H
#define PROTOTYPE_H

/******** Bibliothèque prototypes **********/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/******** Struct _printf **********/


/******** Function prototypes **********/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
