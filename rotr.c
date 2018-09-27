#include "monty.h"

/**
 * rotr - reverses whole stack
 * @stack: top of stack
 * @line_number: current line of monty file
 * Description: reverses the order of the stack, and moves top to former bottom
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)(line_number);

	if (*stack != NULL)
	{
		if ((*stack)->prev != NULL)
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
}
