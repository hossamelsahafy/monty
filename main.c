#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M_CMD_L 256

/**
 * main - entry function
 *
 * @arc: parameter to identify int
 *
 * @arv: parameter point to char
 *
 * Return: if arc != 2 return 1
 * otherwise 0
*/

int main(int arc, char *arv[])
{
	FILE *file;
	stack_t *stack = NULL;

	if (arc != 2)
	{
		fprintf(stderr, "USAGE: %s filename\n", arv[0]);
		f_stack(&stack);
		return (1);
	}
	file = fopen(arv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error opening file.\n");
		f_stack(&stack);
		return (1);
	}
	pro_file(file, &stack);
	f_stack(&stack);
	fclose(file);
	return (0);
}
