#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

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
/**
 * struct var_s - opcode and its function
 * @fd: file descriptor
 * @buff: is the buffer
 * @n: an integer
 *
 * Description: file descriptor, buffer and integer
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct var_s
{
	FILE *fd;
	char *buff;
	char *n;
} var_t;

var_t var;


void push(stack_t **stack, unsigned int line_number);
void (*al(char *s, unsigned int c))(stack_t **stack, unsigned int line_number);
stack_t *addnode(stack_t **head, char *n);
int _isdigit(void);
void pall(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **node, unsigned int line_number);
void swap(stack_t **node, unsigned int line_number);

#endif
