#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @node: is the element
 * @line_number: line number
 */
void add(stack_t **node, unsigned int line_number)
{
	stack_t node_add;
    if (*node == NULL || (*node)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		free(var.buff);
		free_stack(*node);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
    node_add = (*node)->n;
	pop(node, line_number);
	(*node)->n += node_add;
}
