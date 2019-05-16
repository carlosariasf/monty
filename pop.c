#include "monty.h"
/**
 *
 * 
 *
 *
 *
**/
void pop_m(stack_t **stack, unsigned int line_number)
 {
     stack_t *current = *stack;

     if (*stack == NULL)
     {
         if (current->prev == NULL && current->next == NULL)
         {
             *stack = NULL;
         }
         free(current);
         free(stack);
         printf("L%d: can't pop an empty stack", line_number);
         exit(EXIT_FAILURE);
     }
     current->next->prev = NULL;
     *stack = current->next;
     free(current);
}
