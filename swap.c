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
	else if (current->next->next == NULL)
	{
		current->prev = current->next;
		current->next->prev = NULL;
		current->next->next = current;
		*stack = current->next;
		current->next = NULL;
		free(current);
	}
	else
	{
		current->next->next->prev = current->next->prev;
		current->next->prev = NULL;
		tmp = current->next->next;
		current->next->next = *stack;
		*stack = current;
		current->next = tmp;
		free(current);
		free(tmp);
	}
}
