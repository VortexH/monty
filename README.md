# A Monty Bytecode Interpreter

## Background:
Monty is a scripting language that is compiled into bytecodes and the purpose of this interpreter is to execute the files containing the bytecode.

## Program Execution:
This interpreter parses the .m files line by line and executes commands from the opcodes in the file until it hits an error.

## Running the program
1. compile with gcc version 4.8.4
`gcc -Wall -Wextra -Werror -pedantic *.c`

2. ./executable path/to/.m/file
e.g. `./a.out test.m`

## Command Execution
1. If an opcode takes an argument, anything after the opcode and its argument is ignored. 
2. If an opcode doesn't take an argument and an argument has been entered, it is ignored. 
3. As commands are being parsed by the interpreter, any number of tabs and spaces is ignored and the opcode is executed.
4. If an error condition has been met, then the interpreter will display an error on the stderr including the line number and exit with the EXIT_FAILURE macro.
5. If an opcode was spelled incorrectly, then the program returns error code 4 and exits with EXIT_FAILURE.

The format of the stderr message is shown below for reference.


## List of implemented opcodes:
Opcode | Functionality | Usage| Error Code
-------|---------------|-------|----------
**push** | pushes an element to the stack | push *\<int\>* where *\<int\>* is an integer. Push fails if the argument is not an integer or no argument is given at all. | 5
**pall** | prints all the values on the stack | If there isn't anything on the stack, it doesn't print anything.|None
**pint**| prints the value at the top of the stack|*pint*| 10
**pop**|removes the top element of the stack|*pop*|11
**swap**| swaps the top 2 elements of the stack| *swap*|  12
**add**| adds the top 2 elements of the stack, stores it in the second element of the stack, and pops the stack |*add* |13
**nop**| doesn't do anything | *nop*| None
**sub**| subtracts the top 2 elements of the stack, stores it in the second element of the stack, and pops the stack|*sub* |16
**div** | divides the 2nd element of the stack with the first, stores it in the second element of the stack, and pops the stack| *div* |14 or 15
**mul**| multiplies the top 2 elements of the stack, stores the result| *mul*| 17
**mod**| computes the modulus of the 2 top 2 elements in the stack, stores it in the 2nd element of the stack, and pops the stack| *mod*| 18 or 15
**pchar**|prints the char at the top of the stack| *pchar*| 19 or 20
**pstr**| prints the string sitting in the stack from the top of the stack to the bottom using the integers as ASCII values| *pstr*| None
**rotl**| rotates the stack to the top, moves the top element of the stack to the bottom and pushes the stack up one |*rotl*| None

## Examples
There are 2 files located in the bytecodes/ directory.

1. 000.m
push 0  
push 1  
push 2  
   push 3  
                pall  
push 4  
push      5  
                    push 6  
                    
     pall  
     
** output **
3  
2  
1  
0  
6  
5  
4  
3  
2  
1  
0  

2. 001.m
push 0 Push 0 onto the stack  
push 1 Push 1 onto the stack  

push 2  
  push 3  
                    pall  
                   
                   
                   
push 4  
   push 5  
      push 6  
      
** output **
3  
2  
1  
0  


## Error Codes:
Error Code | Error Message on stderr
-----------|------------------------
4| unknown instruction
5| usage: push integer
7| Error: malloc failed
8| Error: Can't open file
9| USAGE: monty file
10| can't pint, stack empty
11| can't pop an empty stack
12|can't swap, stack too short
13| can't add, stack too short
14| can't div, stack too short
15| division by zero
16| can't sub, stack too short
17| can't mul, stack too short
18| can't mod, stack too short
19| can't pchar, value out of range
20| can't pchar, stack empty

## Error print format
### Error 9
`fprintf(stderr, "%s\n", error message)`
### Error 8
`fprintf(stderr, "%s %s\n", error message, filename sent to executable)`
### Error 4
`fprintf(stderr, "L%d: %s %s\n", line number, error message, opcode string)`
### All other error codes
`fprintf(stderr, "L%d: %s\n", line number, error message)`


# Authors
1. Brent Janski @talktobrent
2. Hemant Heer @VortexH







