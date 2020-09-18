#include "monty.h"
/**
 * pop - print the numbers add
 * @node: is the element
 * @line_number: line number
 */
void pop(stack_t **node, unsigned int line_number)
{
	stack_t *node_pop = *node;
        if (!node_pop)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		free(var.buff);
		free_stack(*node);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
        *node = *node->next;
}
