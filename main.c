#include "monty.h"

int main(int argc, char **argv)
{
	char *arr[2] = {NULL, NULL};
	char *buffer = NULL;
	size_t n = 0;
	int line = 0, error = 0, check = 0;
	FILE *monty = NULL;

	if (argc != 2 || access(argv[1], F_OK) == -1)
		error = 9;
	else
	{
		monty = fopen(argv[1], "r");
		if (monty == NULL)
			error = 8;
	}

	if (error == 0)
	{
		do {
			buffer = NULL;
			n = 0;
			check = getline(&buffer, &n, monty);
			if (buffer == NULL)
				error = 7;
			if (check != -1 && error == 0)
			{
				line++;
				buildarray(buffer, arr);
				error = builtins(arr);
			}
		} while (check != -1 && error == 0);
	}
	errprint(error, line, argv[1], arr[0]);
	/**
	if (list != NULL)
		free(list);
	if (buffer != NULL)
		free(buffer);
	**/
	return (error);
}
