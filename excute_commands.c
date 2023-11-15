#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMD_LEN 256
/**
 * execute_command - function to execute command
 *
 * @cmd: parameter that point to char
 *
 * @stack: parameter that point to stack_t
 *
 * @l_number: parameter to identify unsigned int
*/
void execute_command(char *cmd, stack_t **stack, unsigned int l_number)
{
    int num;
    char *token;

    token = strtok(cmd, " \n");
    if (strcmp(token, "push") == 0)
    {
        token = strtok(NULL, " \n");
        num = atoi(token);
        push(stack, l_number, num);
    }
    else if (strcmp(token, "pop") == 0)
    {
        pop(stack, l_number);
    }
    else if (strcmp(token, "pall") == 0)
    {
        pall(stack, l_number);
    }
    else
    {
        fprintf(stderr, "Error: Unknown command: %s\n", token);
    }
}
