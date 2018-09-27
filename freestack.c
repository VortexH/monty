#include "monty.h"

/**
 * freeStack - traverses the stack and frees each member of the stack
 * @stack: the head node of the stack
 * Description: In the stack, next points up, and prev points down the members
 * of the stack.
 * Return: void
*/
void freeStack(stack_t *stack)
{
	while (stack->prev != NULL)
	{
		stack = stack->prev;
		free(stack->next);
	}
	free(stack);
}


