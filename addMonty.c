#include "monty.h"
/**
 * addMonty - to add the top two elements of the stack.
 * @stk: it's stack head
 * @cntr: it's line number
 * Return: void
 */
void addMonty(stack_t **stk, unsigned int cntr)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", cntr);
		fclose(bs.fl);
		free(bs.cnt);
		freeMontyStack(*stk);
		exit(EXIT_FAILURE);
	}
	hd = *stk;
	ax = hd->n + hd->next->n;
	hd->next->n = ax;
	*stk = hd->next;
	free(hd);
}
