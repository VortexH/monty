#include "monty.h"

/**
 * swap - swaps the top 2 elements of the stack
 *
 * @stack: doubly linked representation of the stack
 * @line_number: line number where opcode exists
 *
 *
 * Return: void
 *
*/

void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	(void)line_number;

	if (stacklength(*stack) < 2)
	{
		all.errorcode = 12;
		return;
	}

	tmp = (*stack)->n;
	(*stack)->n = (*stack)->prev->n;
	(*stack)->prev->n = tmp;

}

