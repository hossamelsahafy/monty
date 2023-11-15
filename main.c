#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMD_LEN 256
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
	char cmd[MAX_CMD_LEN];
	unsigned int l_number = 0;

	if (arc != 2)
	{
		fprintf(stderr, "USAGE: %s filename\n", arv[0]);
		return (1);
	}
	file = fopen(arv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error opening file.\n");
		return (1);
	}
	while (fgets(cmd, MAX_CMD_LEN, file) != NULL)
	{
		l_number++;
		execute_command(cmd, &stack, l_number);
	}
	fclose(file);
	return (0);
}

