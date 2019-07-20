#include "monty.h"
/**
 * get_op_func - select the function depends on the string
 * @s: string.
 * Return: the function.
**/
void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number)
{
instruction_t ops[] = {
{"push", push_m},
{"pall", pall_m},
{"pint", pint_m},
{"pop", pop_m},
{"swap", swap_m},
{"add", add_m},
{"nop", nop_m},
{"sub", sub_m},
{"div", div_m},
{"mul", mul_m},
{NULL, NULL}
};
int i = 0;

while (ops[i].opcode)
{
	if (strcmp((ops[i]).opcode, s) == 0)
		return (ops[i].f);
	i++;
}
return (ops[i].f);
}
