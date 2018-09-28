#include "monty.h"

/**
 * rotr - reverses whole stack
 * @stack: top of stack
 * @line_number: current line of monty file
 * Description: reverses the order of the stack, and moves top to former bottom
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *cursor;
	stack_t *penultimate;

	(void)(line_number);

	if (stacklength(*stack) > 1)
	{
		cursor = *stack;
		while (cursor->prev != NULL)
			cursor = cursor->prev;

		penultimate = cursor->next;
		cursor->prev = *stack;
		cursor->next = NULL;
		penultimate->prev = NULL;
		(*stack)->next = cursor;
		*stack = cursor;

	}
}

