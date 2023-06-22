#include "monty.h"

/**
 * pintMonty - Prints the top element of the stack
 * @stk: Pointer to the stack head
 * @cntr: Line number
 *
 * Return: void
 */
void pintMonty(stack_t **stk, unsigned int cntr)
{
	if (*stk == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", cntr);
		fclose(bs.fl);
		free(bs.cnt);
		freeMontyStack(*stk);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stk)->n);
}
