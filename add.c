#include "monty.h"


/**
 * add - adds the top 2 elements of the stack, stores the result in the 2nd
 * element of the stack, and pops the first member of the stack
 *
 * @stack: doubly linked list representation of the stack
 * @line_number: line number of the opcode
 *
 * Return: void
 *
*/

void add(stack_t **stack, unsigned int line_number)
{

	if (stacklength(*stack) < 2)
	{
		all.errorcode = 13;
		return;
	}

	(*stack)->prev->n = (*stack)->n + (*stack)->prev->n;
	pop(stack, line_number);

}


