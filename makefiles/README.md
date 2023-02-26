# <p align="Center">C - Makefiles</p>

<img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/273/giphy-2.gif" width="100%"><br><br>

--------------------

### Read or Watch: 

- [Makefile](https://www.google.com/search?q=makefile)
- [Makefiletutorial](https://makefiletutorial.com/)<br><br>

--------------------

### Technology used
* [Vim](https://doc.ubuntu-fr.org/vim/)
* Tested in Ubuntu [22.04 LTS](https://ubuntu.com/download/desktop/)<br>

--------------------

### Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Version of `gcc`: 9.3.0
- Version of `make`: GNU Make 4.2.1
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory

## More Info
### Files
### The following are very important steps  
- In the following tasks, we are going to use `these files`. We want to compile these only.
- You can either create the files of the repository into your project folder (makefiles) and copy paste their content from github OR you can clone the **0x1B.c** repository into the **makefiles** folder.
- If you’re going to clone it, you should enter the **makefiles** folder and **inside this folder** delete the **.git** folder using this command `rm` `-rf` `.git` then move the files from this folder into the **makefiles** folder to test your work.
<br><br>

# TASKS

### [0. make -f 0-Makefile ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/makefiles/0-Makefile)

> Create your first Makefile.  

Requirements:
- name of the executable: `school`  
- rules: `all`
    - The `all` rule builds your executable
- variables: none

<details>
<summary>Test File</summary>
<br>
    
```c
julien@ubuntu:~/Makefiles$ make -f 0-Makefile 
gcc main.c school.c -o school
julien@ubuntu:~/Makefiles$ ./school 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/Makefiles$ 

```
</details>

--------------------

### [1. make -f 1-Makefile ](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/makefiles/1-Makefile)

Requirements:  
- name of the executable: `school`  
- rules: `all`  
    - The `all` rule builds your executable  
- variables: `CC`, `SRC`  
    - `CC`: the compiler to be used  
    - `SRC`: the `.c` files

<details>
<summary>Test File</summary>
<br>
        
```c
julien@ubuntu:~/Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/Makefiles$
```
</details>
    
------------------------

### [2. make -f 2-Makefile](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/makefiles/2-Makefile)

Create your first useful Makefile.

Requirements:  
- name of the executable: `school`  
- rules: `all`  
    - The `all` rule builds your executable
- variables: `CC`, `SRC`, `OBJ`, `NAME`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
- The `all` rule should recompile only the updated source files  
- You are not allowed to have a list of all the `.o` files

<details>
<summary>Test File</summary>
<br>
            
```c
julien@ubuntu:~/Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ make -f 2-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ echo "/* School */" >> main.c
julien@ubuntu:~/Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ 
```
</details>
        
-------------------------

### [3. make -f 3-Makefile](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/makefiles/3-Makefile)

Requirements:
- name of the executable: `school`
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - `all`: builds your executable
    - `clean`: deletes all Emacs and Vim temporary files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
- `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` files

<details>
<summary>Test File</summary>
<br>
    
```c
julien@ubuntu:~//Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school.c
main.c
main.c~
m.h
julien@ubuntu:~/Makefiles$ make -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school
school.c
school.o
main.c
main.c~
main.o
m.h
julien@ubuntu:~/Makefiles$ make clean -f 3-Makefile 
rm -f *~ school
julien@ubuntu:~/Makefiles$ make oclean -f 3-Makefile 
rm -f main.o school.o
julien@ubuntu:~/Makefiles$ make fclean -f 3-Makefile 
rm -f *~ school
rm -f main.o school.o
julien@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ make re -f 3-Makefile
rm -f main.o school.o
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ 
```
</details>
            
-------------------------

### [4. A complete Makefile](https://github.com/Air-KS/holbertonschool-low_level_programming/blob/main/makefiles/4-Makefile)

Requirements:

- name of the executable: `school`
- rules: `all`, `clean`, `fclean`, `oclean`, `re`
    - `all`: builds your executable
    - `clean`: deletes all Emacs and Vim temporary files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
    - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail  
- You are not allowed to have a list of all the `.o` files

<details>
<summary>Test File</summary>
<br>
        
```c
julien@ubuntu:~/Makefiles$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ 
```
</details>
    
------------------------------

# Author
ROGERET Kevin<br>
> Project carried out within the framework of the school **[Holberton School](https://www.holbertonschool.com/).**<br>
