#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define STACK 0
#define QUEUE 1
#define DELIMS " \n\t\a\b"

extern char **op_toks;

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


void free_stack(stack_t **stack);
int init_stack(stack_t **stack);
int check_mode(stack_t *stack);
void free_tokens(void);
unsigned int token_arr_len(void);
int run_monty(FILE *script_fd);
void set_op_tok_error(int error_code);


void montyPush(stack_t **stack, unsigned int line_number);
void montyPall(stack_t **stack, unsigned int line_number);
void montyPrint(stack_t **stack, unsigned int line_number);
void montyPop(stack_t **stack, unsigned int line_number);
void montySwap(stack_t **stack, unsigned int line_number);
void montyAdd(stack_t **stack, unsigned int line_number);
void montyNop(stack_t **stack, unsigned int line_number);
void montySub(stack_t **stack, unsigned int line_number);
void montyDiv(stack_t **stack, unsigned int line_number);
void montyMul(stack_t **stack, unsigned int line_number);
void montyMod(stack_t **stack, unsigned int line_number);
void montyPutChar(stack_t **stack, unsigned int line_number);
void montyPutStrr(stack_t **stack, unsigned int line_number);
void montyRtl(stack_t **stack, unsigned int line_number);
void montyRtr(stack_t **stack, unsigned int line_number);
void montyStack(stack_t **stack, unsigned int line_number);
void montyQueue(stack_t **stack, unsigned int line_number);


char **strtow(char *str, char *delims);
char *get_int(int n);


int usagErr(void);
int err(void);
int openErr(char *filename);
int opErr(char *opcode, unsigned int line_number);
int noneIntErr(unsigned int line_number);
int popErr(unsigned int line_number);
int printErr(unsigned int line_number);
int sStErr(unsigned int line_number, char *op);
int divLineErr(unsigned int line_number);
int putCharErr(unsigned int line_number, char *message);

#endif
