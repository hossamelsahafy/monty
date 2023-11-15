#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push - function that add element to the top of the stack
 *
 * @stack: parameter point to linked list
 *
 * @l_number: parameter to identify unsigned int
 *
 * @n: parameter to identify int
*/
void push(stack_t **stack, unsigned int l_number, int n)
{
	stack_t *new;

	(void)l_number;
	new = malloc(sizeof(stack_t));
	if (new == NUL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = new;
	}
	*stack = new;
}
