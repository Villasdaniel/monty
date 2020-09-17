#include "monty.h"
/**
 * _isdigit - check if is a digit
 * Return: 1 if not digit, 0 if digit
 */
int _isdigit(void)
{
	int j;

	if (!(var.n))
	{
		return (1);
	}
	j = var.n[0] == '-' ? 1 : 0;
	while (var.n[j] != 0)
	{
		if (var.n[j] < '0' || var.n[j] > '9')
		{
			return (1);
		}
		j++;
	}
	return (0);
}
