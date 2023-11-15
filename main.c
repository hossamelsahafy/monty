#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMD_LEN 256
int main(int arc, char *arv[])
{
    FILE *file;
    stack_t *stack = NULL;
    char cmd[MAX_CMD_LEN];
    unsigned int line_number = 0;

    if (arc != 2)
    {
        fprintf(stderr, "USAGE: %s filename\n", arv[0]);
        return 1;
    }
    file = fopen(arv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }
    while (fgets(cmd, MAX_CMD_LEN, file) != NULL)
    {
        line_number++;
        execute_command(cmd, &stack, line_number);
    }
    fclose(file);
    return 0;
}
