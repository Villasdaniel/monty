#include "monty.h"
/**
 * addnode - add a node in the beginning
 * @head: a pointer to the node
 * @n: data to add
 * Return: the new node
 */
stack_t *addnode(stack_t **head, char *n)
{
	stack_t *new_node;
	stack_t *last = *head;
	
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(var.buff); free_stack(*head);
		fclose(var.fd); exit(EXIT_FAILURE);
	}
	new_node->n = atoi(n);
	new_node->next = NULL;
	if (!(*head))
	{
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;
	return (new_node);
}