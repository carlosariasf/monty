#include "monty.h"
/**
 * pchar_m - prints the value at the top of the stack.
 * @stack: is the doubly linked list.
 * @line_number: the line number of the file.
 *
**/
void pchar_m(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

        if (!current)
        {
                freemalloc(stack);
                fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
                exit(EXIT_FAILURE);
        }
	if (current->n >= 32 && current->n <= 126)
		printf("%c\n", current->n);
	else if (current->n < 32 && current->n > 126)
	{
		freemalloc(stack);
 		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
 		exit(EXIT_FAILURE);
        }
}
