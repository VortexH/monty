#include "monty.h"

/**
 * _div - divides the 2ndtop element of the stack by the top element of the
 * stack
 *
 * @stack: doubly linked list representation of the stack
 * @line_number: the line that opcode exists at
 *
 * Description: Throws an error if the stack contains less than 2 elements or
 * if the top element of the stack is 0.
 *
 * Return: void
*/

void _div(stack_t **stack, unsigned int line_number)
{
	if (stacklength(*stack) < 2)
	{
		all.errorcode = 14;
		return;
	}

	if ((*stack)->n == 0)
	{
		all.errorcode = 15;
		return;
	}

	(*stack)->prev->n = (*stack)->prev->n / (*stack)->n;
	pop(stack, line_number);

}
