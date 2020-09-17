#include "monty.h"
/**
 * pall - print the numbers add
 * @node: is the element
 * @line_number: line number
 */
void pall(stack_t **node, unsigned int line_number)
{
	stack_t *node_pall = *node;
	(void)line_number;

	while (node_pall)
	{
		printf("%d\n", (node_pall->n) - 48);
		node_pall = node_pall->next;
	}
}
