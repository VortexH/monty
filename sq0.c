#include "monty.h"

/**
 * sq0 - switches stack off
 * @stack: top of stack
 * @line_number: current line of monty file
 */

void sq0(stack_t **stack, unsigned int line_number)
{
	(void)(line_number);
	(void)(stack);

	if (all.stack == 0)
		return;

	all.stack = 0;

}
