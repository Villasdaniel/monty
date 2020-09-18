#include "monty.h"

var_t var = {NULL, NULL, NULL};
/**
 * main - interpretate monty commands
 * @argc: Description of parameter x
 * @argv: Description of parameter x
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	stack_t *node = NULL;
	size_t lenght = 0;
	char *token = NULL;
	unsigned int count_line = 0;
	void (*operation)(stack_t **stack, unsigned int line_number) = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	var.fd = fopen(argv[1], "r");
	if (!var.fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&var.buff, &lenght, var.fd) != EOF)
	{
		count_line++;
		token = strtok(var.buff, "\t\n ");
		if (token != NULL && token[0] != '#')
		{
			operation = al(token, count_line);
			if (!operation)
			{
				fprintf(stderr, "L%u: unknown instruction %s\n", count_line, token);
				free_stack(node);
				free(var.buff);
				fclose(var.fd);
				exit(EXIT_FAILURE);
			}
			var.n = strtok(NULL, " \t\n");
			operation(&node, count_line);
		}
	}
	free(var.buff);
	free_stack(node);
	fclose(var.fd);
	exit(EXIT_SUCCESS);
}
