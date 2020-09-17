#include "monty.h"
/**
 * push - adds a new node at the beginning of a dlistint_t list
 * @node: is a node
 * @line_number: lines number
 */
void push(stack_t **node, unsigned int line_number)
{
	int check_digit;

	check_digit = _isdigit();
	if (check_digit == 1 || !(var.n))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free(var.buff);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
	addnode(&(*node), var.n);
}
