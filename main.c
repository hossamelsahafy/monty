#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    stack_t *stack = NULL;

    push(&stack, 0, 1);
    push(&stack, 0, 2);
    push(&stack, 0, 3);
    pall(&stack, 0);

    free_stack(&stack);
    return (EXIT_SUCCESS);
}
