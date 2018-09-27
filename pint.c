#include "monty.h"

/**
 * pint - prints 'n' value for top node of stack
 * @stack: head of stack
 * @line_number: current line number in monty file
 * Description: prints n value of top node, otherwise sets errorcode in struct
 */


void pint(stack_t **stack, unsigned int line_number)
{
	(void)(line_number);

	if (*stack != NULL)
		printf("%i\n", (*stack)->n);
	else
		all.errorcode = 10;
}
