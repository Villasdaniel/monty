#include "monty.h"
/**
 * all - Short description, single line
 * @string: buffer
 * @count_line: line number
 * Return: function or NULL
 */
void (*all(char *string, unsigned int count_line))(stack_t **, unsigned int)
{
	int i;
	instruction_t functions[] = {
		{"pall", pall},
		{"push", push},
		{NULL, NULL}
		};

	(void)count_line;
	for (i = 0; functions[i].opcode != NULL; i++)
	{
		if (strcmp(string, functions[i].opcode) == 0)
		{
			return (functions[i].f);
		}
	}
	return (NULL);
}
