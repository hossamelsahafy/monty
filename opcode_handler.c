#include <stdio.h>
#include "monty.h"
#include <string.h>
#include <stdlib.h>

/**
 * handle_opcode - function to handle opcode
 *
 * @op: parameter that point to linked list
 *
 * @stack: parameter that point to linked list
 *
 * @l_number: parameter to identify unsigned int
 *
 * @n: parameter to identify int
 *
 * Return: if opcode[i] == 0
 */

void handle_opcode(instruction_t *op, stack_t **stack,
		unsigned int l_number, int n)
{
	int i = 0;
	char *opcode;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pop", pop},
		{"pint", pint},
		{"nop", nop},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{NULL, NULL}
	};
	opcode = strtok(op->opcode, " \n");
	if (opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", l_number, op->opcode);
		exit(EXIT_FAILURE);
	}
	while (ops[i].opcode)
	{
		if (strcmp(opcode, ops[i].opcode) == 0)
		{
			ops[i].f(stack, l_number, n);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", l_number, opcode);
	exit(EXIT_FAILURE);
}

