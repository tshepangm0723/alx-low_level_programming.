#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - selects correct function to perform
 * the operation asked by user
 * @s: operator passed as argument
 * Return: pointer to the function corrsponding
 * to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int j = 0;

	while (ops[j].f != NULL)
	{
		if (*s == *(ops[j].op) && s[1] == '\0')
			return (ops[j].f);
		j++;
}
	printf("Error\n");
	exit(99);
}
