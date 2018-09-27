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
		case (10):
			fprintf(stderr, "L%d", all.line_number);
			fprintf(stderr, E10);
			break;
		case (11):
			fprintf(stderr, "L%d", all.line_number);
			fprintf(stderr, E11);
			break;
		case (12):
			fprintf(stderr, "L%d", all.line_number);
			fprintf(stderr, E12);
			break;
		case (13):
			fprintf(stderr, "L%d", all.line_number);
			fprintf(stderr, E13);
			break;
		case (14):
			fprintf(stderr, "L%d", all.line_number);
			fprintf(stderr, E14);
			break;
		case (15):
			fprintf(stderr, "L%d", all.line_number);
			fprintf(stderr, E15);
			break;
	}

}
