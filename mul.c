#include "monty.h"

/**
 * mul - multiplies the second top element of the stack with the top element
 * of the stack
 *
 * @stack: doubly linked list representation of the stack
 * @line_number: the line that opcode exists at
 *
 * Description: multiplies the top 2 elements of the stack, stores the result
 * in the second element of the stack, and pops the stack.
 * Throws an error if the stack contains less than 2 elements.
 *
 * Return: void
*/

void mul(stack_t **stack, unsigned int line_number)
{
	if (stacklength(*stack) < 2)
	{
		all.errorcode = 17;
		return;
	}

	(*stack)->prev->n = (*stack)->prev->n * (*stack)->n;
	pop(stack, line_number);

}
