#include "monty.h"

void pint(stack_t **stack, unsigned int line_number)
{
	(void)(line_number);

	if (*stack != NULL)
		printf("%i\n", (*stack)->n);
	else
		all.errorcode = 10;
}
