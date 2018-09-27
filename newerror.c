#include "monty.h"

/**
 * errprint - prints error
 */

void errprint(void)
{
	char *string;

	if (all.errorcode == 0)
		return;

	string = errorarray();

	switch (all.errorcode)
	{
		case (9):
			fprintf(stderr, "%s\n", string);
			break;
		case (8):
			fprintf(stderr, "%s %s\n", string, all.argv[1]);
			break;
		case (4):
			fprintf(stderr, "L%d: %s %s\n", all.line_number,
					string, all.arr[0]);
			break;
		default:
			fprintf(stderr, "L%d: %s\n", all.line_number, string);
	}
}
