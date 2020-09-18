#include "monty.h"
/**
 * multi - mul two elements.
 * @node: is the element
 * @line_number: line number
 */
void multi(stack_t **node, unsigned int line_number)
{
    if (*node == NULL || (*node)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		free(var.buff);
		free_stack(*node);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
    (*node)->next->n = (*node)->n * (*node)->next->n;
	pop(node, line_number);
}