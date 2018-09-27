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
#define E9 "Usage: monty file\n"
#define E8 "Error: Can't open file"
#define E7 "Error: malloc failed\n"
#define E4 ": unknown instruction "
#define E5 ": usage: push integer\n"

void errprint(void)
{
	switch (all.errorcode)
	{
		case (9):
			fprintf(stderr, E9);
			break;
		case (8):
			fprintf(stderr, E8);
			fprintf(stderr, " %s\n", all.argv[1]);
			break;
		case (7):
			fprintf(stderr, E7);
			break;
		case (4):
			fprintf(stderr, "L%d", all.line_number);
			fprintf(stderr, E4);
			fprintf(stderr, "%s\n", all.arr[0]);
			break;
		case (5):
			fprintf(stderr, "L%d", all.line_number);
			fprintf(stderr, E5);
			break;
	}

}
