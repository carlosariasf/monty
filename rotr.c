#include "monty.h"
/**
 * rotr_m - change two nodes
 * @stack: doubly linked list
 * @line_number: number of each line
 *
**/
void rotr_m(stack_t **stack, unsigned int line_number)
{
	int i = 1;
	stack_t *currenttop = NULL;
	stack_t *currentbot = NULL;
	(void) line_number;
	
	if (*stack)
	{
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
			currentbot->prev->next = currenttop;
			currenttop->next->prev = currentbot;
			currentbot->next = currenttop->next;
			currenttop->prev = currentbot->prev;
			currenttop->next = NULL;
			currentbot->prev = NULL;
			*stack = currentbot;
		}
	}
}
