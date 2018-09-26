#include "monty.h"

void builtins(stack_t **stack)
{
	instruction_t builtins[] = {
		{"push", push},
		{"pall", pall},
/*		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},*/
		{NULL, NULL},
	};

	int count;

	for (count = 0; builtins[count].opcode != NULL; count++)
	{
		if ((strcmp(array[0], builtins[count].opcode)) == 0)
		{
			builtins[count].f(stack, all.line_number);
			return;
		}
	}
	all.errorcode = 4;
}
