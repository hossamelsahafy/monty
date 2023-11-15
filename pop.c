#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
void pop(stack_t **stack, unsigned int l_number)
{
    stack_t *tmp;

    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", l_number);
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
