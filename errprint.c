#include "monty.h"

/**
 * errprint - contains a switch statement with various numbers that map to
 * specific error messages printing on the standard error and exits with the
 * appropriate status.
 *
 * Description: essentially, a table that exits with the appropriate conditions
 *
 * Return: void
 *
*/

void errprint(void)
{
	switch (all.errorcode)
	{
		case (9):
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case (8):
			fprintf(stderr, "Error: Can't open file %s\n",\
					all.argv[1]);
			break;
		case (7):
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case (4):
			fprintf(stderr, "L%d: unknown instruction %s\n",\
					all.line_number, all.arr[0]);
			break;
		case (5):
			fprintf(stderr, "L%d: usage: push integer\n",\
					all.line_number);
			break;
	}

	if (all.errorcode != 0)
		all.errorcode = -1;
}
