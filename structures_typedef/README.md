# <p align="Center">C - Structures, typedef</p>

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/07/Typedef-in-c.jpg" width="100%"><br><br>

# Resources
> In C programming, structures allow programmers to group different types of data under a single logical entity. A structure can be defined as a set of variables of different types, grouped under a single name. Structures are often used to represent complex objects, such as database records or sensor data.

> Typedef in C is a keyword that allows programmers to define a new data type, often using an existing structure or another data type. Typedef allows programmers to create simpler and more meaningful names for data types, which makes the code easier to understand and read.

> By combining structures and typedef, programmers can create customized data types that represent complex objects such as cars, animals, or people, and use them effectively in their code. Structures can also be used to organize data in arrays or lists.

> In summary, structures and typedef in C are key features for organizing and manipulating complex data in C programs. Structures allow programmers to create logical entities that group data of different types, while typedef allows for simpler and more meaningful names for these data types.

<br>

## Read or Watch: 

- [0x0d. Structures.pdf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230326%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230326T103744Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=f5596ae65ba85bd207fefcfc2d7f65b1ebf86b6a8c1dd6c388ebd55d138ce070)
- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [Documentation: structures](https://github.com/hs-hq/Betty/wiki/Documentation:-Data-structures)
- [0x0d. Typedef and structures.pdf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230326%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230326T104024Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=2bbaf85a78a10f367354a81ddb490ada8b30731e87e80e1ee4eb61f9b4754060)
- [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
- Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
- [The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/) (Advanced - not mandatory)
<br><br>

--------------------

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `printf`, `malloc`, `free` and `exit`.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- Don’t forget to push your header file
- All your header files should be include guarded
--------------------

<br>

# Prototype
### [dog.h](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/structures_typedef/dog.h)
<details>
<summary>Prototype File - dog.h</summary>
<br>

```h
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 *
 * Description: write description of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
```
</details>
<br>

# TASKS

### [0. Poppy](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/argc_argv/0-whatsmyname.c)

> Define a new type struct dog with the following elements:

- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

- File: `dog.h`

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```
</details>

--------------------

### [1. A dog is the only thing on earth that loves you more than you love yourself](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/structures_typedef/1-init_dog.c)

> Write a function that initialize a variable of type `struct dog`

- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

- File: `1-init_dog.c`

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```
</details>

------------------------

### [2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/structures_typedef/2-print_dog.c)

> Write a function that prints a `struct dog`

- Prototype: `void print_dog(struct dog *d);`
- Format: see example bellow
- You are allowed to use the standard library
- If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
- If `d` is `NULL` print nothing.

- File: `2-print_dog.c`


<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Poppy
Age: 3.500000
Owner: Bob
julien@ubuntu:~/0x0d. structures, typedef$ 
```
</details>

-------------------------

### [3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/structures_typedef/dog.h)

> Define a new type `dog_t` as a new name for the type `struct dog`.

- File: `dog.h`

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```
</details>

-------------------------

### [4. A door is what a dog is perpetually on the wrong side of ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/structures_typedef/dog.h)

> Write a function that creates a new dog.

- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- You have to store a copy of `name` and `owner`
- Return `NULL` if the function fails

- File: `4-new_dog.c`

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```
</details>
<br>

------------------------------

### [5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/structures_typedef/5-free_dog.c)

> Write a function that frees dogs.

- Prototype: `void free_dog(dog_t *d);`

- File: `5-free_dog.c`

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$
```
</details>
<br>

------------------------------

# Author
ROGERET Kevin<br>
> Project carried out within the framework of the school **[Holberton School](https://www.holbertonschool.com/).**<br>

