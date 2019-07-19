#include "monty.h"
/**
 * pint_m - prints the value at the top of the stack.
 * @stack: is the doubly linked list.
 * @line_number: the line number of the file.
 *
**/
void pint_m(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (current)
		printf("%d\n", current->n);
	else
	{
		freemalloc(stack);
 		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
 		exit(EXIT_FAILURE);
        }

}
