#include "monty.h"
/**
 * pint - print the numbers add
 * @node: is the element
 * @line_number: line number
 */
void pint(stack_t **node, unsigned int line_number)
{
	stack_t *node_pall = *node;

	if (!node_pall)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		free(var.buff);
		free_stack(*node);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", node_pall->n);
}
