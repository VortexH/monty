#include "monty.h"

/**
 * parseAndExec - parses monty stream, builds an array of tokens from line in
 * stream, calls function from opcode struct to run parsed opcode.
 *
 * @monty: file stream "monty" returned from fopen
 *
 * Description: Loops through bytecode file until EOF, creates an array of 2
 * slots containing both the parsed opcode and argument following the opcode,
 * and calls builtins.c to run parsed opcode.
 *
 * Return: stack
*/

stack_t *parseAndExec(FILE *monty)
{
	char *buffer;
	size_t n;
	int check;
	stack_t *stack = NULL;

	check = 0;
	do {
		buffer = NULL;
		n = 0;
		all.arr[0] = NULL;
		all.arr[1] = NULL;

		check = getline(&buffer, &n, monty);
		if (buffer == NULL)
			all.errorcode = 7;
		if (check != -1 && all.errorcode == 0)
		{
			all.line_number++;
			buildarray(buffer);
			if (all.arr[0] != NULL)
				builtins(&stack);
		}
		errprint();
		if (buffer != NULL)
			free(buffer);
	} while (check != -1 && all.errorcode == 0);

	return (stack);
}
