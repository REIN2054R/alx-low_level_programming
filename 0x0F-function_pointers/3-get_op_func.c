#include "3-calc.h"

/**
 *get_op_func - call the others functions
 *@s: the operator
 *
 *Return: an int usually an exit error
*/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (!(strcmp(ops[i].op, s)))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
