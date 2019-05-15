#include "monty.h"
/**
 *
 *
 *
 *
**/
void pall_m(const stack_t **stack)
{
	const stack_t *current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
