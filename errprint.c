#include "monty.h"

/**
 * errprint - contains a switch statement with various numbers that map to
 * specific error messages printing on the standard error and exits with the
 * appropriate status.
 *
 * @error: error number from main
 * @line: line number where error occurred
 * @filename: name of the file
 * @oparg: opcode
 *
 * Description: essentially, a table that exits with the appropriate conditions
 *
 * Return: void
 *
*/

void errprint(int error, int line, char *filename, char *oparg)
{
	switch (error)
	{
		case (9):
			fprintf(stderr, "USAGE: monty file\n");
			exit(EXIT_FAILURE);
			break;
		case (8):
			fprintf(stderr, "Error: Can't open file %s\n", filename);
			exit(EXIT_FAILURE);
			break;
		case (7):
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
			break;
		case (4):
			fprintf(stderr, "L%d: unknown instruction %s\n", line, oparg);
			exit(EXIT_FAILURE);
			break;
	}
}
