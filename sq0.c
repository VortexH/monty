#include "monty.h"

/**
 * sq0 - reverses whole stack if "queue" entered
 * @stack: top of stack
 * @line_number: current line of monty file
 * Description: reverses the order of the stack (moves top to bottom)
 */

void sq0(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)(line_number);

	if (all.stack == 0)
		return;

	all.stack = 1;

	if (*stack != NULL)
	{
		current = *stack;
		while (current->prev != NULL)
		{
			current = current->prev;
			current->next->prev = current->next->next;
			current->next->next = current;
		}
		current->prev = current->next;
		current->next = NULL;
		*stack = current;
	}
}
