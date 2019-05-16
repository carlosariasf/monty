#include "monty.h"
/**
 * push_m - Add node to stack
 * @stack: Head to pointer stack
 * @line_number: line of the file
 *
**/
void push_m(stack_t **stack, unsigned int line_number)
{
	int number = value;
	stack_t *new;
	stack_t *current;
	(void) line_number;
	current = *stack;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new->n = number;
	new->prev = NULL;
	new->next = NULL;
	if (*stack == NULL)
	{
		*stack = new;
	}
	else
	{
		new->next = current;
		current->prev = new;
		*stack = new;
	}
}
