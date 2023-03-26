# <p align="Center">C - argc, argv</p>

<img src="https://azrael.digipen.edu/~mmead/www/Courses/CS225/ArgcArgv-1.gif" width="100%"><br><br>

# Resources
> `argc` and `*argv[]` are two commonly used parameters in `C` and `C++` programs. They are often used to pass arguments to a program from the command line.

- `argc` represents the number of arguments passed to a program from the command line. The first argument (argument 0) is usually the name of the program itself, followed by zero or more additional arguments.

- `argv[]` is an array of strings that contains the arguments passed to a program from the command line. Each element of the array corresponds to a passed argument, and the first element (element 0) always contains the program name.

> Therefore, `argc` `*argv[]` is a two-dimensional array pointer. The first dimension corresponds to the number of arguments passed `(argc)` and the second dimension is an array of string pointers `(argv[])`, which contains the arguments themselves.  

<br>

## Read or Watch: 

- [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
- [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
- [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
- [how to compile with unused variables](https://www.google.com/webhp?q=unused+variable+C)
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
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- You are allowed to use the standard library

--------------------
<br><br>
# Prototype
### [main.h](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/argc_argv/main.h)
<details>
<summary>Prototype File</summary>
<br>

```c
int _putchar(char c);
```
</details>
<br>

# TASKS

### [0. It ain't what they call you, it's what you answer to ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/argc_argv/0-whatsmyname.c)

> Write a program that prints its name, followed by a new line.

- If you rename the program, it will print the new name, without having to compile it again
- You should not remove the path before the name of the program

- File: `0-whatsmyname.c`

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/argc, argv$ 
```
</details>

--------------------

### [1. Silence is argument carried out by other means](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/argc_argv/1-args.c)

> Write a program that prints the number of arguments passed into it.

- Your program should print a number, followed by a new line

- File: `1-args.c`

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/argc, argv$ ./nargs 
0
julien@ubuntu:~/argc, argv$ ./nargs hello
1
julien@ubuntu:~/argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/argc, argv$ 
```
</details>

------------------------

### [2. The best argument against democracy is a five-minute conversation with the average voter](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/argc_argv/2-args.c)

> Write a program that prints all arguments it receives.

- All arguments should be printed, including the first one
- Only print one argument per line, ending with a new line

- File: `2-args.c`


<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
julien@ubuntu:~/argc, argv$ ./args 
./args
julien@ubuntu:~/argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/argc, argv$ 
```
</details>

-------------------------

### [3. Neither irony nor sarcasm is argument](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/argc_argv/3-mul.c)

> Write a program that multiplies two numbers.

- Your program should print the result of the multiplication, followed by a new line
- You can assume that the two numbers and result of the multiplication can be stored in an integer
 -If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

- File: `3-mul.c`

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/argc, argv$ ./mul 2 3
6
julien@ubuntu:~/argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/argc, argv$ ./mul 2 0
0
julien@ubuntu:~/argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/argc, argv$ ./mul
Error
julien@ubuntu:~/argc, argv$ 
```
</details>

-------------------------

### [4. To infinity and beyond](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/argc_argv/4-add.c)

> Write a program that adds positive numbers.

- Print the result, followed by a new line
- If no number is passed to the program, print 0, followed by a new line
- If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
- You can assume that numbers and the addition of all the numbers can be stored in an int

- File: `4-add.c`

<details>
<summary>Test File</summary>
<br>

```c
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
julien@ubuntu:~/argc, argv$ ./add 1 1
2
julien@ubuntu:~/argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/argc, argv$ ./add
0
julien@ubuntu:~/argc, argv$ 
```
</details>
<br>

------------------------------

# Author
ROGERET Kevin<br>
> Project carried out within the framework of the school **[Holberton School](https://www.holbertonschool.com/).**<br>

