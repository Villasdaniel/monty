#include "monty.h"
/**
 * all - Short description, single line
 * @s: buffer
 * @c: line number
 * Return: function or NULL
 */
void (*al(char *s, unsigned int c))(stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t functions[] = {
		{"pall", pall},
		{"push", push},
		{NULL, NULL}
		};

	(void)c;
	for (i = 0; functions[i].opcode != NULL; i++)
	{
		if (strcmp(s, functions[i].opcode) == 0)
		{
			return (functions[i].f);
		}
	}
	return (NULL);
}
