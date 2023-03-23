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
		{"-", op_add},
		{"*", op_add},
		{"/", op_add},
		{"%", op_add},
		{NULL, NULL}
	};

	while (ops[index].op != NULL)
	{
		if (*s == *ops[index].op)
		{
			return (ops[index].f);
		}
		index++;
	}
	return (NULL);
}
