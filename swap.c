#include "monty.h"
/**
 * swap_m - change two nodes
 * @stack: doubly linked list
 * @line_number: number of each line
 *
**/
void swap_m(stack_t **stack, unsigned int line_number)
{
        stack_t *current = NULL;
	stack_t *tmp = NULL;
	int i = 0;

	
	current = *stack;
	while (current)
		current = current->next, i++;
	current = *stack;
	if (i < 2)
	{
		freemalloc(stack);
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (i > 2)
	{
		current->next->next->prev = current;
		tmp = current->next->next;
	}
        current->prev = current->next;
        current->next->prev = NULL;
	current->next->next = current;
	if (i == 2)
		*stack = current->next, current->next = NULL;
	if (i > 2)
		*stack = current->next, current->next = tmp;
}
