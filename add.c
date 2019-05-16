#include "monty.h"
/**
* add_m - Add stack
* @stack: STACK
* @line_number: Line
**/
void add_m(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (*stack == NULL)
	{
		free(current);
		free(stack);
		printf("L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	current->next->n = current->n + current->next->n;
	current->next->prev = NULL;
	*stack = current->next;
	free(current);
}
