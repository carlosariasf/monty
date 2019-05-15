#include "monty.h"
/**
 *
 *
 *
 *
**/
void pall_m(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
    (void) line_number;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
