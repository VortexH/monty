#include "monty.h"

int push(char *string)
{
	int x, count;
	stack_t *new;

	for(count = 0; isdigit(string[count]) > 0; count++)
		;

	if (string[count] != 0)
		return (4);

	x = atoi(string);

	new = malloc(sizeof(stack_t));
	if (new != NULL)
	{
		new->n = x;
		new->prev = head;
		new->next = NULL;
		head = new;
		return(0);
	}
	else
		return (7);
}

int pall(char *string)
{
	stack_t *run;
	(void)(string);

	run = head;
	while (run != NULL)
		printf("%i\n", run->n);
	return (0);
}
