#include "monty.h"

int builtins(array)
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

	for (count = 0; builtins[count].opcode != NULL; count++)
	{
		if ((strcmp(array[0], builtins[count].opcode)) == 0)
			return ((builtins[count].f(array[1])));
	}
	return (4);
}
