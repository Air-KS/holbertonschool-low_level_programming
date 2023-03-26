# <p align="Center">C - Static libraries</p>

<img src="https://media.licdn.com/dms/image/C4D12AQG1kYdCFfNvOw/article-cover_image-shrink_720_1280/0/1593823758129?e=2147483647&v=beta&t=vdidazTUYKQzhggMn0Z0UpoFdZuibGyWZNhPugTwX74" width="100%"><br><br>

# Resources
> In C programming, a static library is a collection of object files that are linked together to form a single library file. The library file can then be linked with a program to provide additional functionality or to reduce the size of the final executable file.

> Static libraries are created using a tool called an archiver, which combines multiple object files into a single archive file. The resulting archive file has a .a file extension and can be linked with a program using the linker.

> Static libraries provide several benefits to C programmers. They can be used to modularize code and reduce duplication of code across multiple programs. They can also improve performance by reducing the size of the executable file and reducing the number of disk accesses needed to load the program.

> To use a static library in a C program, the library must first be compiled and linked with the program. The library is then linked with the program at compile time using the -l option of the linker. The linker will search for the library in the standard system directories and in any additional directories specified by the -L option.

> In summary, static libraries in C are a powerful tool for organizing and sharing code across multiple programs. They can be used to modularize code, reduce duplication, and improve performance. To use a static library, it must first be compiled and linked with the program and then linked with the program at compile time using the -l option of the linker.

<br>

### Advantages of Static Libraries

- **Size:** Static libraries are typically smaller in size than dynamic libraries because they do not contain the extra information required for runtime linking.
- **Portability:** Static libraries are self-contained and do not rely on external dependencies, making them more portable and easier to distribute.
- **Performance:** Linking to a static library at compile time can result in faster program execution because the library's code is incorporated directly into the executable.

<br>

### Creating a Static Library

To create a static library, you first need to create object files from your source code using the `gcc -c` command. Then, use the `ar` command to combine the object files into a static library.

```
# Compile source code into object files
gcc -c file1.c file2.c file3.c

# Create a static library named "libmylib.a"
ar rcs libmylib.a file1.o file2.o file3.o
```

### Linking to a Static Library

To link to a static library when compiling an executable, use the `-l` flag followed by the library's name (without the "lib" prefix and ".a" suffix) and the `-L` flag followed by the directory where the library is located.

```
# Link to the "libmylib.a" library in the current directory
gcc -o myprogram myprogram.c -lmylib -L.
```

Static libraries in C can be a great way to reuse code and improve the performance of your programs. With the above information, you can now start creating and using static libraries in your own C projects.

<br>

## Read or Watch: 

- [What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [Creating A Static “C” Library Using “ar” and “ranlib”](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [Using A “C” Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [What is difference between Dynamic and Static library(Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM) (stop at 4:44)
<br><br>

## Man or Help
> `ar` `ranlib` `nm`

--------------------

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/main/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. - Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

--------------------

## Bash

- Allowed editors: `vi`, `vim`, `emacs`
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your files should end with a new line [why?](https://github.com/hs-hq/_putchar.c/blob/main/_putchar.c)
- The first line of all your files should be exactly `#!/bin/bash`
- A `README.md` file, at the root of the folder of the project, describing what each script is doing
- All your files must be executable

--------------------

<br>

# Prototype
### [main.h](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/static_libraries/main.h)
<details>
<summary>Prototype File - main.h</summary>
<br>

```h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include "main.h"
#include <string.h>
#include <unistd.h>


/******** Function prototypes **********/

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif
```
</details>
<br>

# TASKS

### [0. A library is not a luxury but one of the necessities of life](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/static_libraries/libmy.a)

> Create the static library `libmy.a` containing all the functions listed below:

- **File:** [libmy.a](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/static_libraries/libmy.a) | [main.h](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/static_libraries/main.h)

<details>
<summary>Test File</summary>
<br>

```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
</details>

> If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your `main.h` file to your repository. It should at least contain all the prototypes of the above functions.

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/Static Librairies$ ar -t libmy.a 
0-isupper.o
0-memset.o
0-strcat.o
1-isdigit.o
1-memcpy.o
1-strncat.o
100-atoi.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/Static Librairies$ nm libmy.a 

0-isupper.o:
0000000000000000 T _isupper

0-memset.o:
0000000000000000 T _memset

0-strcat.o:
0000000000000000 T _strcat

1-isdigit.o:
0000000000000000 T _isdigit

1-memcpy.o:
0000000000000000 T _memcpy

1-strncat.o:
0000000000000000 T _strncat

100-atoi.o:
0000000000000000 T _atoi

2-strchr.o:
0000000000000000 T _strchr

2-strlen.o:
0000000000000000 T _strlen

2-strncpy.o:
0000000000000000 T _strncpy

3-islower.o:
0000000000000000 T _islower

3-puts.o:
                 U _putchar
0000000000000000 T _puts

3-strcmp.o:
0000000000000000 T _strcmp

3-strspn.o:
0000000000000000 T _strspn

4-isalpha.o:
0000000000000000 T _isalpha

4-strpbrk.o:
0000000000000000 T _strpbrk

5-strstr.o:
0000000000000000 T _strstr

6-abs.o:
0000000000000000 T _abs

9-strcpy.o:
0000000000000000 T _strcpy

_putchar.o:
0000000000000000 T _putchar
                 U write
julien@ubuntu:~/Static Librairies$ cat main.c 
#include "main.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
julien@ubuntu:~/Static Librairies$ gcc -std=gnu89 main.c -L. -lmy -o quote
julien@ubuntu:~/Static Librairies$ ./quote 
"At the end of the day, my goal was to be the best hacker"
    - Kevin Mitnick
julien@ubuntu:~/Static Librairies$ 
```
</details>

--------------------

### [1. Without libraries what have we? We have no past and no future ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/static_libraries/create_static_lib.sh)

> Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory.

- **File:** [create_static_lib.sh](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/static_libraries/create_static_lib.sh)

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/Static Librairies$ ls *.c
0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c  _putchar.c
0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c  4-strpbrk.c  6-abs.c
julien@ubuntu:~/Static Librairies$ ./create_static_lib.sh 
julien@ubuntu:~/Static Librairies$ ls *.a
liball.a
julien@ubuntu:~/Static Librairies$ ar -t liball.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/Static Librairies$  
```
</details>

------------------------------

# Author
ROGERET Kevin<br>
> Project carried out within the framework of the school **[Holberton School](https://www.holbertonschool.com/).**<br>

