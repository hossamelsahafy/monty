#include <stdio.h>
#include "monty.h"
#include <string.h>
#include <stdlib.h>

void handle_opcode(instruction_t *op, stack_t **stack, unsigned int l_number, int n)
{
    int i = 0;
    char *opcode;
    instruction_t ops[] = {
        {"push", push},
        {"pall", pall},
        {NULL, NULL}
    };

    opcode = strtok(op->opcode, " \n");
    if (opcode == NULL) {
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
