#include "monty.h"
/**
 * pop_m - delete a node
 * @stack: doubly linked list
 * @line_number: line number of the file
 *
**/
void pop_m(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (current == NULL)
	{
		free(current);
		free(stack);
		printf("L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	if (!current->prev && !current->next)
	{
		free(current);
		*stack = NULL;
	}
	else
	{
	current->next->prev = NULL;
	*stack = current->next;
	free(current);
	}
}
