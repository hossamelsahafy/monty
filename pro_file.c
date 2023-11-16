#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pro_file - function to identify process
 *
 * @file: parameter point to FILE
 *
 * @stack: parameter that point to linked list
*/
void pro_file(FILE *file, stack_t **stack)
{
	char cmd[M_CMD_L];
	unsigned int l_number = 0;
	int n;
	instruction_t op;
	char *arg;

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
			arg = strtok(NULL, " \n");
			if (arg == NULL)
			{
				fprintf(stderr, "L%d: usage: push integer\n", l_number);
				fclose(file);
				f_stack(stack);
				exit(EXIT_FAILURE);
			}
			n = atoi(arg);
		}
		handle_opcode(&op, stack, l_number, n);
	}
}

