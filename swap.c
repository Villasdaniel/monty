#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @node: is the element
 * @line_number: line number
 */
void swap(stack_t **node, unsigned int line_number)
{
	stack_t *node_swap = *node;
        if (node_swap == NULL || (*node_swap)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		free(var.buff);
		free_stack(*node);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
        node_swap = (*node)->next;
        (*node)->prev = (*node)->next;
        (*node)->next = node_swap->next;
        node_swap->prev = NULL;
        (*node)->prev = node_swap;
        if (node_swap->next)
                node_swap->next->prev = *node;
        node_swap->next = *node;
        (*node) = (*node)->prev;
}
