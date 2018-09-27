#include "monty.h"

/**
 * rotl - moves top node of stack to bottom
 * @stack: head of stack
 * @line_number: current line number in monty file
 * Description: moves top node to bottom of stack, then makes previous
 * second highest node the new head
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *run;
	(void)(line_number);
	run = *stack;

	if (*stack != NULL || (*stack)->prev != NULL)
	{
		while (run->prev != NULL)
			run = run->prev;

		(*stack)->prev->next = NULL;
		run->prev = *stack;
		*stack = (*stack)->prev;
		run->prev->next = run;
		run->prev->prev = NULL;
	}
}

