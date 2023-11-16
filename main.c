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
	char cmd[M_CMD_L];
	unsigned int l_number = 0;
	instruction_t op;
	int n;

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
	while (fgets(cmd, M_CMD_L, file) != NULL)
	{
		l_number++;
		op.opcode = strtok(cmd, " \n");
		if (op.opcode == NULL || op.opcode[0] == '\0' || op.opcode[0] == '#')
		{
			continue;
		}
		if (strcmp(op.opcode, "push") == 0)
		{
			char *arg = strtok(NULL, " \n");
			if (arg == NULL)
			{
				fprintf(stderr, "L%d: usage: push integer\n", l_number);
				fclose(file);
				f_stack(&stack);
				exit(EXIT_FAILURE);
			}
			n = atoi(arg);
		}
		handle_opcode(&op, &stack, l_number, n);
	}
	f_stack(&stack);
	fclose(file);
	return (0);
}
