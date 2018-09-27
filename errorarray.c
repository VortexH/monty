#include "monty.h"

/**
 * errorarray - returns the appropriate string to print to the stderr
 *
 * Return: stderr message string
 *
*/

char *errorarray(void)
{
	int i;

	errorarr_1 arr = {{8, "Error: Can't open file"},
			{9, "USAGE: monty file"},
			{7, "Error: malloc failed"},
			{4, "unknown instruction"},
			{5, "usage: push integer"},
			{10, "can't pint, stack empty"},
			{11, "can't pop an empty stack"},
			{12, "can't swap, stack too short"},
			{13, "can't add, stack too short"},
			{14, "can't div, stack too short"},
			{15, "division by zero"},
			{16, "can't sub, stack too short"},
			{17, "can't mul, stack too short"},
			{18, "can't mod, stack too short"},
			{19, "can't pchar, value out of range"},
			{20, "can't pchar, stack empty"}};

	for (i = 0; arr[i].errorcode != -1; i++)
		if (all.errorcode == arr[i].errorcode)
			break;

	return (arr[i].string1);
}
