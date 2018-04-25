#include "monty.h"
/**
 *
 *
 *
 *
 */

void(*get_func(char **token, unsigned int line))(stack_t **, unsigned int)
{
	instruction_t ops[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop}
		{NULL, NULL}
	};
	unsigned int check = 0;

	while (ops[check].op != NULL && strcmp(ops[check].op, token) != 0)
	{
		
		check++;
	}
}
