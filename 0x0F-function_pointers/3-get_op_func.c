#include <stdio.h>
#include "3-calc.h"
/**
 *get_op_func - function pointer to get operator
 *
 * @s: pointers to argument
 *Return: Always success
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
	int i;

	i = 0;
	while (ops[i].op != NULL) /**check if operatorsn are present*/
	{
		if (ops[i].op[0] == s[0])/**checks if operator mactches provided argument*/
		{
		return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
