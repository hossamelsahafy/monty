#include "monty.h"
#include <stddef.h>
void free_stack(stack_t **stack)
{
    while(*stack != NULL)
    {
        pop(stack);
    }
}
