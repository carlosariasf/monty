#ifndef MONTY
#define MONTY
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
extern int value;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void freemalloc(stack_t **stack);
int numlines(char *buffer);
void ifnumber(
FILE *fp, stack_t **stack, char *argumts, char *bufferc, unsigned int line);
void callfunc(FILE *fr, stack_t *head);
void swap_m(stack_t **stack, unsigned int line_number);
void push_m(stack_t **stack, unsigned int line_number);
void pall_m(stack_t **stack, unsigned int line_number);
void pint_m(stack_t **stack, unsigned int line_number);
void pop_m(stack_t **stack, unsigned int line_number);
void add_m(stack_t **stack, unsigned int line_number);
void nop_m(stack_t **stack, unsigned int line_number);
void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number);
#endif
