# <p align="Center">C - Functions, nested loops</p>

<br><br>

# Resources
> In C programming, functions are code blocks that perform a specific task and can be repeatedly called from other parts of the program. C functions can take input parameters and return a value as output if necessary.  

> Nested loops, also known as loops within loops, are control structures that allow a series of instructions to be repeated multiple times, using loops inside other loops. This can be useful for traversing multidimensional arrays or performing repetitive operations on structured data.  

> By combining functions and nested loops, programmers can write C programs that perform complex tasks in an efficient and organized manner. Functions can be used to encapsulate specific functionality, while nested loops can be used to traverse data or perform repetitive operations on a large scale.  

> Overall, functions and nested loops are key elements of C programming that enable programmers to create sophisticated and efficient programs.

<br>

## Read or Watch: 

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](http://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [Learning to Program in C (Part 06) ](https://www.youtube.com/watch?v=qMlnFwYdqIw) *(stop at 14:00)*
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files ](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) *(stop before the “Once-Only Headers” paragraph)*
<br><br>

--------------------

## Technology used
* [Vim](https://doc.ubuntu-fr.org/vim/)
* Tested in Ubuntu [22.04 LTS](https://ubuntu.com/download/desktop/)<br>

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
- You are allowed to use _putchar [_putchar](https://github.com/hs-hq/_putchar.c/blob/main/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [main.h](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/main.h)
- Don’t forget to push your header file



--------------------

## More Info
You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.

<br><br>
# TASKS

### [0. _putchar ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/0-putchar.c)

> Write a program that prints `_putchar`, followed by a new line.

- The program should return `0`

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
julien@ubuntu:~/$ ./0-putchar 
_putchar
julien@ubuntu:~/$ 
```
</details>

--------------------

### [1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/1-alphabet.c)

> Write a function that prints the alphabet, in lowercase, followed by a new line.

- Prototype: `void print_alphabet(void);`
- You can only use `_putchar` twice in your code

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
julien@ubuntu:~/$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/$
```
</details>

------------------------

### [2. 10 x alphabet](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/2-print_alphabet_x10.c)

> Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

- Prototype: `void print_alphabet_x10(void);`
- You can only use `_putchar` twice in your code


<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ cat 2-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
julien@ubuntu:~/$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [3. islower](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/3-islower.c)

> Write a function that checks for lowercase character.

- Prototype: `int _islower(int c);`
- Returns `1` if `c` is lowercase
- Returns `0` otherwise

FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ cat 3-main.c 
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
julien@ubuntu:~/$ ./3-islower 
011
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [4. isalpha](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/4-isalpha.c)

> Write a function that checks for alphabetic character.

- Prototype: `int _isalpha(int c);`
- Returns `1` if `c` is a letter, lowercase or uppercase
- Returns `0` otherwise

FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ cat 4-main.c 
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
julien@ubuntu:~/$ ./4-isalpha 
1110
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [5. Sign](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/5-sign.c)

> Write a function that prints the sign of a number.

- Prototype: `int print_sign(int n);`
- Returns `1` and prints `+` if `n` is greater than zero
- Returns `0` and prints `0` if `n` is zero
- Returns `-1` and prints `-` if `n` is less than zero

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ cat 5-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign
julien@ubuntu:~/$ ./5-sign 
+, 1
0, 0
+, 1
-, /
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/6-abs.c)

> Write a function that computes the absolute value of an integer.

- Prototype: `int _abs(int);`

FYI: The standard library provides a similar function: `abs`. Run `man abs` to learn more.

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ cat 6-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs
julien@ubuntu:~/$ ./6-abs 
1
0
1
98
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/7-print_last_digit.c)

> Write a function that prints the last digit of a number.

- Prototype: `int print_last_digit(int);`
- Returns the value of the last digit

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
julien@ubuntu:~/$ ./7-last_digit 
8044
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [8. I'm federal agent Jack Bauer, and today is the longest day of my life](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/8-24_hours.c)

> Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

- Prototype: `void jack_bauer(void);`
- You can listen to `this soundtrack` while coding :)

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ cat 8-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24
julien@ubuntu:~/$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
julien@ubuntu:~/$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
julien@ubuntu:~/$ ./8-24 | wc -l
1440
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [9. Learn your times table](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/9-times_table.c)

> Write a function that prints the `9` times table, starting with `0`.

- Prototype: `void times_table(void);`
- Format: see example

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ cat 9-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
ulien@ubuntu:~/$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
julien@ubuntu:~/$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [10. a + b](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/10-add.c)

> Write a function that adds two integers and returns the result.

- Prototype: `int add(int, int);`

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ cat 10-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add
julien@ubuntu:~/$ ./10-add 
98
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [11. 98 Battery Street, the OG](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/functions_nested_loops/11-print_to_98.c)

> Write a function that prints all natural numbers from n to 98, followed by a new line.

- Prototype: void print_to_98(int n);
- Numbers must be separated by a comma, followed by a space
- Numbers should be printed in order
- The first printed number should be the number passed to your function
- The last printed number should be 98
- You are allowed to use the standard library

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ cat 11-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98
julien@ubuntu:~/$ ./11-98 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
98
111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98
81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
julien@ubuntu:~/$ 
```
</details>

------------------------------

# Author
ROGERET Kevin<br>
> Project carried out within the framework of the school **[Holberton School](https://www.holbertonschool.com/).**<br>
