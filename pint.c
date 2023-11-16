#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pint - function to print the value of top element
 *
 * @stack: parameter that point to linked list
 *
 * @l_number: parameter that point to unsigned int
 *
 * @n: parameter that point to int
 *
*/
void pint(stack_t **stack, unsigned int l_number, int n)
{
	(void)n;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", l_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

