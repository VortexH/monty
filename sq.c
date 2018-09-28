#include "monty.h"

/**
 * sq - reverses whole stack
 * @stack: top of stack
 * @line_number: current line of monty file
 * Description: reverses the order of the stack (moves top to bottom)
 */

void sq(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)(line_number);

	if (strcmp(all.arr[0], "stack") == 0)
		if (all.stack == 1)
			return;

	if (strcmp(all.arr[0], "queue") == 0)
		if (all.stack == 0)
			return;

	all.stack = !all.stack;

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
