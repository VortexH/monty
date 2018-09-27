#include "monty.h"

/**
 * sub - subtracts the top element of the stack from the 2nd element in the
 * stack
 *
 * @stack: doubly linked list representation of the stack
 * @line_number: the line that opcode exists at
 *
 * Description: If the stack is less than 2 element, prints an error to stderr
 * stating: can't sub, stack too short
 *
 * Return: void
*/

void sub(stack_t **stack, unsigned int line_number)
{
	if (stacklength(*stack) < 2)
	{
		all.errorcode = 16;
		return;
	}

	(*stack)->prev->n = (*stack)->prev->n - (*stack)->n;
	pop(stack, line_number);

}
