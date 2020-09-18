#include "monty.h"

void pchar(stack_t **node, unsigned int line_number)
{
        if(!node)
        {
                fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		free(var.buff);
		free_stack(*node);
		fclose(var.fd);
		exit(EXIT_FAILURE);
        }
        if ((*node)->n < 0 || (*node)->n > 127)
        {
                fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		free(var.buff);
		free_stack(*node);
		fclose(var.fd);
		exit(EXIT_FAILURE);
        }
        putchar((char)(*node)->n);
        putchar('\n');
}