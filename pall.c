#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pall - function that print value of elements
 *
 * @stack: parameter that point to linked list
 *
 * @l_number: parameter to identify unsigned int
*/
void pall(stack_t **stack, unsigned int l_number)
{
	stack_t *c;

	(void)l_number;
	c = *stack;
	while (c != NULL)
	{
		printf("%d\n", c->n);
		c = c->next;
	}
}

