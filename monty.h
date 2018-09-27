#ifndef _MONTY_H
#define _MONTY_H

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct errlinearray - contains errorcode, line number, and token array
 * @errorcode: error code assigned to member when program fails
 * @line_number: line number where failure occurred
 * @arr: array of tokens generated after parsing buffer for opcode and value
 * @argv: command line argument extern variable
 *
*/
typedef struct errlinearray
{
	int errorcode;
	unsigned int line_number;
	char *arr[2];
	char **argv;
} s_ela;

/** Struct has been declared as global **/
s_ela all;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void buildarray(char *buffer);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void errprint(void);
void builtins(stack_t **stack);
stack_t *parseAndExec(FILE *monty);
void freeStack(stack_t *stack);
int intcheck(void);
int stacklength(stack_t *stack);

#endif
