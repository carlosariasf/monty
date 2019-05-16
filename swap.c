#include "monty.h"
/**
 * swap_m - change two nodes
 * @stack: doubly linked list
 * @line_number: number of each line
 *
**/
void swap_m(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	stack_t *tmp = *stack;

	if (*stack == NULL)
	{
	free(current);
	free(stack);
	printf("L%d: can't pop an empty stack", line_number);
	exit(EXIT_FAILURE);
	}
	current->next->prev = NULL;
	*stack = current->next;
	free(current);
}
