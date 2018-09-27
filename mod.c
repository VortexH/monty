#include "monty.h"

/**
 * mod - calculates the modulus of the second top element of the stack with
 * the top element of the stack, stores it in the second top element, and pops
 * the stack to reduce the stack by 1.
 *
 * @stack: doubly linked list representation of the stack
 * @line_number: the line that opcode exists at
 *
 * Description: If the stack is less than 2 elements, prints error code 17 to
 * the stderr and exits the process with EXIT_FAILURE. If the top element is 0,
 * prints error code 15 to stderr and exits with EXIT_FAILURE.
 *
 * Return: void
*/

void mod(stack_t **stack, unsigned int line_number)
{
	if (stacklength(*stack) < 2)
	{
		all.errorcode = 18;
		return;
	}

	if ((*stack)->n == 0)
	{
		all.errorcode = 15;
		return;
	}

	(*stack)->prev->n = (*stack)->prev->n % (*stack)->n;
	pop(stack, line_number);

}
