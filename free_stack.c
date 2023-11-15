#include "monty.h"
#include <stddef.h>
/**
 * f_stack - function to free nodes
 *
 * @stack: parameter point to linked list
 *
 * @l_number: parameter to identify unsigned int  
*/
void free_stack(stack_t **stack, unsigned int l_number)
{
    while(*stack != NULL)
    {
        pop(stack, l_number);
    }
}
