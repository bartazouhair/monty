#include "monty.h"

/**
 * subMonty - Subtract the top element of the stack
 * @stk: Pointer to the stack
 * @cntr: Line number
 *
 * Return: void
 */
void subMonty(stack_t **stk, unsigned int cntr)
{
	stack_t *ax;
	int s, nd;

	ax = *stk;
	for (nd = 0; ax != NULL; nd++)
		ax = ax->next;
	if (nd < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cntr);
		fclose(bs.fl);
		free(bs.cnt);
		freeMontyStack(*stk);
		exit(EXIT_FAILURE);
	}
	ax = *stk;
	s = ax->next->n - ax->n;
	ax->next->n = s;
	*stk = ax->next;
	free(ax);
}
