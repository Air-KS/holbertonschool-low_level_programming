# <p align="Center">C - Hello, World</p>

<img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/212/cisfun.jpg" width="100%"><br><br>

# Resources
## Read or Watch: 

- [Everything you need to know to start with C.pdf ](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/d801279f75de6a982a55d752dfd3632909f720f0.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230225%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230225T162443Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ecbfa5f1a8e5d0bb8a4b4890ff96164db3053e706da8dc6ef8fed12a0923ecd3) (*You do not have to learn everything in there yet, but make sure you read it entirely first*)
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Betty Coding Style](https://github.com/hs-hq/Betty/wiki)
- [Hash-bang under the hood ](https://twitter.com/unix_byte/status/1024147947393495040?s=21) (*Look at only after you finish consuming the other resources*)
- [Linus Torvalds on C vs. C++ ](http://harmful.cat-v.org/software/c++/linus) (*Look at only after you finish consuming the other resources*)<br>

--------------------

## Man or Help
> gcc | printf (3) | puts | putchar 

--------------------

## Technologies
* [Emacs](https://www.gnu.org/software/emacs/)
* [Vim](https://doc.ubuntu-fr.org/vim/)
* script written in bash [Bash](https://datascientest.com/bash-tout-savoir/)
* Tested in Ubuntu [22.04 LTS](https://ubuntu.com/download/desktop/)<br>

--------------------

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`  
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- All your files should end with a new line  
- A `README.md` file at the root of the repo, containing a description of the repository  
- A `README.md` file, at the root of the folder of this project, containing a description of the project  
- There should be no errors and no warnings during compilation  
- You are not allowed to use `system`  
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)  

--------------------

## More Info
### Betty linter
To run the Betty linter just with command `betty <filename>`:  
- Go to the `Betty` repository  
- Clone the `repo` to your local machine  
`cd` into the Betty directory  
- Install the linter with `sudo ./install.sh`  
`emacs` or `vi` a new file called `betty`, and copy the script below:  
    
```c
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```

- Once saved, exit file and change permissions to apply to all users with chmod a+x betty  
- Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/  <br>

You can now type `betty <filename>` to run the Betty linter!  

<br><br>
# TASKS

### [0. Preprocessor ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/hello_world/0-preprocessor)

> Write a script that runs a C file through the preprocessor and save the result into another file.  
- The C file name will be saved in the variable `$CFILE`
- The output should be saved in the file `c`  

<details>
<summary>Test File</summary>
<br>
        
```c
julien@ubuntu:~/c/$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/$ export CFILE=main.c
julien@ubuntu:~/c/$ ./0-preprocessor 
julien@ubuntu:~/c/$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2

# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/$ 
```
</details>
    
--------------------

### [1. Compiler ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/hello_world/1-compiler)

> Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.o` instead of `.c.`  

*Example: if the C file is `main.c`, the output file should be `main.o`*

<details>
<summary>Test File</summary>
<br>
        
```c
julien@ubuntu:~/c/$ export CFILE=main.c
julien@ubuntu:~/c/$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/$ ./1-compiler 
julien@ubuntu:~/c/$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
julien@ubuntu:~/c/$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@julien@ubuntu:~/c/$ 
```
</details>
    
------------------------

### [2. Assembler ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/hello_world/2-assembler)

> Write a script that generates the assembly code of a C code and save it in an output file.
- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c.`  

*Example: if the C file is `main.c`, the output file should be `main.s`*

<details>
<summary>Test File</summary>
<br>
        
```c
julien@ubuntu:~/c/$ export CFILE=main.c
julien@ubuntu:~/c/$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/$ ./2-assembler
julien@ubuntu:~/c/$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
julien@ubuntu:~/c/$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/$ 
```
</details>
    
-------------------------

### [3. Name ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/hello_world/3-name)

> Write a script that compiles a C file and creates an executable named cisfun.
- The C file name will be saved in the variable `$CFILE`

<details>
<summary>Test File</summary>
<br>
        
```c
julien@ubuntu:~/c/$ export CFILE=main.c
julien@ubuntu:~/c/$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/$ ./3-name 
julien@ubuntu:~/c/$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
julien@ubuntu:~/c/$ 
```
</details>
    
-------------------------

### [4. Hello, puts](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/hello_world/4-puts.c)

> Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
- Use the function `puts`  
- You are not allowed to use `printf`  
- Your program should end with the value `0`  

<details>
<summary>Test File</summary>
<br>
        
```c
julien@ubuntu:~/c/$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
julien@ubuntu:~/c/$ echo $?
0
julien@ubuntu:~/c/$ 
```
</details>
    
--------------------------

### [5. Hello, printf](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/hello_world/5-printf.c)

> Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.  
- Use the function `printf`  
- You are not allowed to use the function `puts`  
- Your program should return `0`  
- Your program should compile without warning when using the `-Wall gcc option`  

<details>
<summary>Test File</summary>
<br>
        
```c++
julien@ubuntu:~/c/$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
julien@ubuntu:~/c/$ ./a.out 
with proper grammar, but the outcome is a piece of art,
julien@ubuntu:~/c/$ echo $?
0
julien@ubuntu:~/c/$ 
```
</details>
    
-------------------------

### [6. Size is not grandeur, and territory does not make a nation](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/hello_world/6-size.c)

> Write a C program that prints the size of various types on the computer it is compiled and run on.  
- You should produce the exact same output as in the example  
- Warnings are allowed  
- Your program should return `0`  
- You might have to install the package `libc6-dev-i386` on your Linux (Vagrant) to test the `-m32` `gcc` option  

<details>
<summary>Test File</summary>
<br>
        
```c
julien@ubuntu:~/c/$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/$ echo $?
0
julien@ubuntu:~/c/$ 
```
</details>
    
---------------------

### [7. Intel ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/hello_world/100-intel)

> Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.  

*Example: if the C file is `main.c`, the output file should be `main.s`*

<details>
<summary>Test File</summary>
<br>
        
```c
julien@ubuntu:~/c/$ export CFILE=main.c
julien@ubuntu:~/c/$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/$ ./100-intel 
julien@ubuntu:~/c/$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/$ 
```
</details>

-------------------------

### [8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/hello_world/101-quote.c)

> Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.  
- You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`  
- Your program should return 1  
- Your program should compile without any warnings when using the `-Wall` `gcc` option  

<details>
<summary>Test File</summary>
<br>
        
```c
julien@ubuntu:~/c/$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
julien@ubuntu:~/c/$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/$ echo $?
1
julien@ubuntu:~/c/$ ./quote 2> q
julien@ubuntu:~/c/$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/$ grep printf < 101-quote.c
julien@ubuntu:~/c/$ grep put < 101-quote.c
julien@ubuntu:~/c/$ 
```
</details>

------------------------------

# Author
ROGERET Kevin<br>
> Project carried out within the framework of the school **[Holberton School](https://www.holbertonschool.com/).**<br> 
