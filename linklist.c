#include "monty.h"

/**
 * push - pushes opcode arg to the stack
 *
 * @stack: doubly linked list representation of the stack
 * @line_number: line number of the parsed command
 *
 * Return: void
*/

void push(stack_t **stack, unsigned int line_number)
{
	int x;
	stack_t *new;

	(void)(line_number);

	if (intcheck() != 0)
		return;

	x = atoi(all.arr[1]);

	new = malloc(sizeof(stack_t));
	if (new != NULL)
	{
		new->n = x;
		new->prev = *stack;
		if (*stack != NULL)
			(*stack)->next = new;
		new->next = NULL;
		*stack = new;
	}
	else
		all.errorcode = 7;
}

/**
 * pall - prints all elements of the stack
 *
 * @stack: doubly linked list representation of the stack
 * @line_number: line number of the parsed command from .m file
 *
 * Return: Void
*/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *run;

	(void)(line_number);

	run = *stack;
	while (run != NULL)
	{
		printf("%i\n", run->n);
		run = run->prev;
	}
}
