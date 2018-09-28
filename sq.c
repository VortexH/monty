#include "monty.h"

/**
 * sq - switches stack on
 * @stack: top of stack
 * @line_number: current line of monty file
 */

void sq(stack_t **stack, unsigned int line_number)
{
	(void)(line_number);
	(void)(stack);

	if (all.stack == 1)
		return;

	all.stack = 1;

}
