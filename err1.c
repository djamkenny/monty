

#include "monty.h"

int usagErr(void);
int err(void);
int openErr(char *filename);
int opErr(char *opcode, unsigned int line_number);
int noneIntErr(unsigned int line_number);

/**
 * usagErr - Prints usage error messages.
 *
 * Return: (EXIT_FAILURE) always.
 */
 
 
 /**
 * noneIntErr - Prints invalid monty_push argument error messages.
 * @line_number: Line number in Monty bytecodes file where error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
 
 /**
 * err - Prints malloc error messages.
 *
 * Return: (EXIT_FAILURE) always.
 */
 
 /**
 * opErr - Prints unknown instruction error messages.
 * @opcode: Opcode where error occurred.
 * @line_number: Line number in Monty bytecodes file where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
 
 /**
 * openErr - Prints file opening error messages w/ file name.
 * @filename: Name of file failed to open
 *
 * Return: (EXIT_FAILURE) always.
 */
 
 
int usagErr(void)
{
	fprintf(stderr, "Usage: monty file\n");
	return (EXIT_FAILURE);
}

err(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

int opErr(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, opcode);
	return (EXIT_FAILURE);
}


int noneIntErr(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}


int openErr(char *filename)
{
	fprintf(stderr, "Error: This file can't open file %s\n", filename);
	return (EXIT_FAILURE);
}
