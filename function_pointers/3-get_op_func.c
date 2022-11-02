#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - function
 * Return: ops
 * @s: pointer
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int cont = 0;

	while (*s && ops[cont].op)
	{
		if (!strcmp(s, ops[cont].op))
			return (ops[cont].f);
		cont++;
	}
	printf("Error\n");
	exit(99);
}
