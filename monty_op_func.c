#include "monty.h"
/**
 * get_op_func - 
 * @s:
 * Return: ops
 *
**/
void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number)
{
instruction_t ops[] = {
{"push", push_m},
{"pall", pall_m},
/**{"pint", pint_m},
{"pop", pop_m},
{"swap", swap_m},
{"add", add_m},
{"nop", nop_m},**/
{NULL, NULL}
};
int i = 0;

while (i <= 2)
{
    if (strcmp((ops[i]).opcode, s) == 0)
	    return (ops[i].f);
    i++;
}
printf("Paso\n");
return (ops[i].f);
}
