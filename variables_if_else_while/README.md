# <p align="Center">C - Variables, if, else, while</p>

<img amign="center" src="https://www.mycplus.com/mycplus/wp-content/uploads/2008/09/Conditional_Statements.png" height="100%" width="100%"><br><br>

<br><br>

# Resources
> Variables are named containers for storing data in a computer program. They can hold different types of data, such as integers, floating-point numbers, characters, and strings. In C programming language, a variable must be declared before it can be used. This means specifying the variable's data type and name.

> The if-else statement is a conditional statement that allows a program to make decisions based on a condition. It works by evaluating a condition and then executing a block of code if the condition is true, or executing a different block of code if the condition is false.

> The while loop is a control structure that allows a program to repeatedly execute a block of code as long as a condition is true. It works by evaluating a condition before each iteration of the loop and then executing the loop body if the condition is true. The loop continues to execute as long as the condition remains true.

<br>

## Read or Watch: 
- [Everything you need to know to start with C.pdf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/42507f7938ddf9b8963bc903bac7d75f88ca8881.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230226%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230226T162835Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=396296e1821ceae2a80a0170f22867a398f1264613a4dbd564158f65a019128d)(*You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”*.)
- [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
- [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
- [integers](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
- [Arithmetic Operators in C](https://www.youtube.com/watch?v=qMlnFwYdqIw)
- [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
- [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
- [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
- [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
- [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
- [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)

--------------------

## Man or Help
> `ascii` (You do not need to learn about `scanf`, `getc`, `getchar`, `EOF`, `EXIT_SUCCESS`, `time`, `rand`, `srand`, `RAND_MAX`, `for loops`, `do...while` `loops`, `functions`.)

--------------------

## Technology used
* [Vim](https://doc.ubuntu-fr.org/vim/)
* Tested in Ubuntu [22.04 LTS](https://ubuntu.com/download/desktop/)<br>

--------------------

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- ll your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl]

--------------------

<br><br>
# TASKS
### [0. Positive anything is better than negative nothing](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/variables_if_else_while/0-positive_or_negative.c)

> This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.

- You can find the source code [here](https://github.com/hs-hq/0x01.c/blob/main/0-positive_or_negative_c)
- The variable `n` will store a different value every time you will run this program
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
    - The number, followed by
        - if the number is greater than 0: `is positive`
        - if the number is 0: `is zero`
        - if the number is less than 0: `is negative`
    - followed by a new line

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/$ 
```
</details>

--------------------

### [1. The last digit](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/variables_if_else_while/1-last_digit.c)

> This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

- You can find the source code here
- The variable `n` will store a different value every time you run this program
- You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
    - The string `Last digit of`, followed by
    - `n`, followed by
    - the string `is`, followed by
        - if the last digit of `n` is greater than 5: the string `and is greater than 5`
        - if the last digit of `n` is 0: the string `and is 0`
        - if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
    - followed by a new line

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/$
```
</details>

------------------------

### [2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/variables_if_else_while/2-print_alphabet.c)

> Write a program that prints the alphabet in lowercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/$
```
</details>

-------------------------

### [3. alphABET](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/variables_if_else_while/3-print_alphabets.c)

> Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [4. When I was having that alphabet soup, I never thought that it would pay off ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/variables_if_else_while/4-print_alphabt.c)

> Write a program that prints the alphabet in lowercase, followed by a new line.

- Print all the letters except `q` and `e`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [5. Numbers](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/variables_if_else_while/5-print_numbers.c)

> Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

- All your code should be in the `main` function

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/$ ./5-print_numbers 
0123456789
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [6. Numberz](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/variables_if_else_while/6-print_numberz.c)

> Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

- You are not allowed to use any variable of type `char`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` twice in your code
- All your code should be in the `main` function

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/$ ./6-print_numberz 
0123456789
julien@ubuntu:~/$ 
```
</details>

-------------------------

### [7. Smile in the mirror](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/variables_if_else_while/7-print_tebahpla.c)

> Write a program that prints the lowercase alphabet in reverse, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/$
```
</details>

-------------------------

### [8. Hexadecimal](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/variables_if_else_while/8-print_base16.c)

> Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the main function
- You can only use `putchar` three times in your code

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/$
```
</details>

-------------------------

### [9. Patience, persistence and perspiration make an unbeatable combination for success](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/variables_if_else_while/9-print_comb.c)

> Write a program that prints all possible combinations of single-digit numbers.

- Numbers must be separated by `,`, followed by a space
- Numbers should be printed in ascending order
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use putchar four times maximum in your code
- You are not allowed to use any variable of type `char`

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/$ 
```
</details>

------------------------------

# Author
ROGERET Kevin<br>
> Project carried out within the framework of the school **[Holberton School](https://www.holbertonschool.com/).**<br>
