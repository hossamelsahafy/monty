#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

void add(stack_t **stack, unsigned int l_number, int n)
{
    stack_t *tmp;

    (void)n;
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", l_number);
        exit(EXIT_FAILURE);
    }
    (*stack)->next->n = (*stack)->next->n + (*stack)->n;
    tmp = *stack;
    *stack = (*stack)->next;
    (*stack)->prev = NULL;
    free(tmp);
}
