#include "monty.h"

/**
 * swapMonty - Swaps the top two elements of the stack
 * @stk: Pointer to the stack
 * @cntr: Line number
 *
 * Return: void
 */
void swapMonty(stack_t **stk, unsigned int cntr)
{
	stack_t *hd;
	int ln = 0, ax;

	hd = *stk;
	while (hd)
	{
		hd = hd->next;
		ln++;
	}
	if (ln < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", cntr);
		fclose(bs.fl);
		free(bs.cnt);
		freeMontyStack(*stk);
		exit(EXIT_FAILURE);
	}
	hd = *stk;
	ax = hd->n;
	hd->n = hd->next->n;
	hd->next->n = ax;
}
