#include "3-calc.h"

/**
* get_op_func - function select correct operator
* @s: symbole (+ - *...)
*
* Return: Operation function
*/

int (*get_op_func(char *s))(int, int)
{
	int index = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[index].op != NULL && *(ops[index].op) != *s)
	{
		index++;
	}

	return (ops[index].f);
}
