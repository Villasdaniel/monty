#include "monty.h"
/**
 * free_stack - frees memory alloc and exit
 * @node: node
 */
void free_stack(stack_t *node)
{
	if (node)
	{
		free_stack(node->next);
		free(node);
	}
	free(var.buff);
	exit(EXIT_FAILURE);
}