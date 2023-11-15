#include "monty.h"
#include <stddef.h>
void free_stack(stack_t **stack, unsigned int l_number)
{
    while(*stack != NULL)
    {
        pop(stack, l_number);
    }
}
