#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop - function that delete first item of elements
 *
 * @stack: parameter that point to stack_t
 *
 * @l_number: parameter to identify unsigned int
 *
 * @n: parameter to identify int
*/

void pop(stack_t **stack, unsigned int l_number, int n)
{
	stack_t *tmp;

	(void)n;
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

