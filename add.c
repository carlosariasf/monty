#include "monty.h"
/**
* add_m - Add stack
* @stack: STACK
* @line_number: Line
**/
void add_m(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;
	int i = 0;

	current = *stack;
	while (current)
		current = current->next, i++;
	current = *stack;
	if (i < 2)
	{
		freemalloc(stack);
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (i >= 2)
	{
		current->next->n = current->n + current->next->n;
		current->next->prev = NULL;
		*stack = current->next;
		free(current);
	}
}
