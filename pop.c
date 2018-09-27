#include "monty.h"

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)(line_number);

	if (*stack != NULL)
	{
		temp = *stack;
		if (temp->prev != NULL)
		{
			*stack = temp->prev;
			(*stack)->next = NULL;
		}
		free(temp);
	}
	else
		all.errorcode = 11;
}
