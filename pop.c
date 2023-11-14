#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
void pop(stack_t **stack)
{
    stack_t *tmp;

    if (*stack == NULL)
    {
        fprintf(stderr, "Error: stack empty\n");
        exit(EXIT_FAILURE);
    }
    tmp = *stack;
    *stack = (*stack)->next;
    if (*stack != NULL)
    {
        (*stack)->prev = NULL;
    }
    free(tmp);
}
