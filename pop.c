#include "monty.h"

/**
 * pop - removes top node from stack
 * @stack: top of stack
 * @line_number: current line number in monty file
 * Description: Removes top node, otherwise sets error in struct if head is
 * NULL.
 */

void pop(stack_t **stack, unsigned int line_number)
{
	(void)(line_number);

	if (*stack != NULL)
	{
		if ((*stack)->prev != NULL)
		{
			*stack = (*stack)->prev;
			free((*stack)->next);
			(*stack)->next = NULL;
		}
		else
		{
			free(*stack);
			*stack = NULL;
		}
	}
	else
		all.errorcode = 11;
}
