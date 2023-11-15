#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMD_LEN 256

void execute_command(char *cmd, stack_t **stack, unsigned int line_number)
{
    int num;
    char *token;

    token = strtok(cmd, " \n");
    if (strcmp(token, "push") == 0)
    {
        token = strtok(NULL, " \n");
        num = atoi(token);
        push(stack, line_number, num);
    }
    else if (strcmp(token, "pop") == 0)
    {
        pop(stack, line_number);
    }
    else if (strcmp(token, "pall") == 0)
    {
        pall(stack, line_number);
    }
    else
    {
        fprintf(stderr, "Error: Unknown command: %s\n", token);
    }
}
