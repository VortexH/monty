#include "monty.h"

int intcheck(void)
{
	int count = 0;

	if (all.arr[1] == NULL)
	{
		all.errorcode = 5;
		return (-1);
	}
	if (all.arr[1][0] == '-')
		count = 1;

	while (isdigit(all.arr[1][count]) > 0)
		count++;

	if (all.arr[1][count] != '\0')
	{
		all.errorcode = 5;
		return (-1);
	}
	return (0);
}
