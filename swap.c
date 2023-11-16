#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap - function to swap elements
 *
 * @stack: parameter that point to linked list
 *
 * @l_number: parameter to identify unsigned int
 *
 * @n: parameter to identify int
*/
void swap(stack_t **stack, unsigned int l_number, int n)
{
    int tmp;

    (void)n;
    if(*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", l_number);
        exit(EXIT_FAILURE);
    }
    tmp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = tmp;
}
