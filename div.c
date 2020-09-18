#include "monty.h"
/**
 * div - function that dividess
 * @node: is the element
 * @line_number: line number
 */
void div(stack_t **node, unsigned int line_number)
{
    if (*node == NULL || (*node)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		free(var.buff);
		free_stack(*node);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
    (*node)->next->n = (*node)->next->n / (*node)->n;
	pop(node, line_number);
}
