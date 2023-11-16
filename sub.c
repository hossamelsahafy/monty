#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add - function to add element
 *
 * @stack: parameter that point to linked list
 *
 * @l_number: parameter to identify unsigned int
 *
 * @n: parameter to identify int
*/
void sub(stack_t **stack, unsigned int l_number, int n)
{
	stack_t *tmp;

	(void)n;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", l_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n - (*stack)->n;
	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(tmp);
}
