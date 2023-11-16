#include "monty.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * f_stack - function to free nodes
 *
 * @stack: parameter point to linked list
 *
 * @l_number: parameter to identify unsigned int
*/
void f_stack(stack_t **stack)
{
    stack_t *temp;

    while (*stack != NULL)
    {
        temp = (*stack)->next;
        free(*stack);
        *stack = temp;
    }
}
