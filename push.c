#include "monty.h"
/**
 * pushm - Add node to stack
 * @stack: Head to pointer stack
 * @i: Value to add
 * Return: New location of head
**/
int push_m(stack_t **stack, int i)
{
	stack_t *new;
	stack_t *current;
	const int number = n;

	current = *head;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = current;
		current->prev = new;
		*head = new;
	}

return (new);
}
