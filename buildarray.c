#include "monty.h"

/**
 * buildarray - generates tokens from buffer and stores tokens in array from
 * the global struct.
 *
 * @buffer: buffer allocated from getline and passed into func to get tokens
 *
 * Description: repeated calls to strtok are made as long as incrementer is
 * less than 2 and token is not null
 *
 * Return: Does not return anything
*/

void buildarray(char *buffer)
{
	char *token;
	int i;

	token = strtok(buffer, " \n");
	for (i = 0; token != NULL && i < 2; i++)
	{
		all.arr[i] = token;
		token = strtok(NULL, " \n");
	}
}
