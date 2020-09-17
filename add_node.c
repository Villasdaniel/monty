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

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);
	if ((*head) == NULL)
	{
		new_node->n = *n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		new_node->n = *n;
		new_node->next = *head;
		new_node->prev = (*head)->prev;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}