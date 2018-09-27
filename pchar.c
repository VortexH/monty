#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 *
 * @stack: doubly linked list representation of the stack
 * @line_number: the line that opcode exists at
 *
 * Description: Treats the integer stored at the top of the stack as an
 * ASCII value and prints it. If the value is not in the ASCII table or the
 * stack is empty, prints error code 19 and 20 respectively.
 *
 * Return: void
*/

void pchar(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (stacklength(*stack) == 0)
	{
		all.errorcode = 20;
		return;
	}

	if ((*stack)->n >= 0 && (*stack)->n <= 127)
	{
		fprintf(stdout, "%c\n", (*stack)->n);
	}
	else
	{
		all.errorcode = 19;
		return;
	}

}
