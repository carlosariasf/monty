#include "monty.h"
/**
 * pstr_m - prints the value at the top of the stack.
 * @stack: is the doubly linked list.
 * @line_number: the line number of the file.
 *
**/
void pstr_m(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void) line_number;

	while (current)
	{
		if (current->n >= 32 && current->n <= 126)
			printf("%c", current->n);
		else
		{
			break;
		}
		current = current->next;
	}
	printf("\n");
}
