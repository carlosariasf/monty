#include "monty.h"
/**
 * rotl_m - change two nodes
 * @stack: doubly linked list
 * @line_number: number of each line
 *
**/
void rotl_m(stack_t **stack, unsigned int line_number)
{
	int i = 1;
	stack_t *currenttop = NULL;
	stack_t *currentbot = NULL;
	(void) line_number;
	
	currentbot = *stack;
	while (currentbot->next)
		currentbot = currentbot->next, i++;
	currenttop = *stack;
	if (i == 2)
	{
		*stack = currenttop->next;
		(*stack)->prev = NULL;
		(*stack)->next = currenttop;
		currenttop->prev = (*stack);
		currenttop->next = NULL;
	}
	if (i > 2)
	{	
		*stack = currenttop->next;
		(*stack)->prev = NULL;
		currentbot->next = currenttop;
		currenttop->next = NULL;
		currenttop->prev = currentbot;
	}
}
