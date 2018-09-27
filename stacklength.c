#include "monty.h"


/**
 * stacklength - calculates the length of the stack
 *
 * @stack: head member of the stack
 *
 * Return: length of the stack - int
 *
*/

int stacklength(stack_t *stack)
{
	stack_t *nomad;
	int i;

	nomad = stack;

	i = 0;
	while (nomad != NULL)
	{
		i++;
		nomad = nomad->prev;
	}

	return (i);

}
