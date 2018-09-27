#include "monty.h"

/**
 * pstr - prints a stack in ascii
 * @stack: top of stack
 * @line_number: current line number of monty file
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *run;
	(void)(line_number);

	if (*stack != NULL)
	{
		run = *stack;
		while (run != NULL && run->n > 31 && run->n < 127)
		{
			fprintf(stdout, "%c\n", run->n);
			run = run->prev;
		}
	}
	else
		fprintf(stdout, "\n");
}
