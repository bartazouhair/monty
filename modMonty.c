#include "monty.h"
/**
 * modMonty - to computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @stk: stack head
 * @cntr: line_number
 * Return: void
*/
void modMonty(stack_t **stk, unsigned int cntr)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", cntr);
		fclose(bs.fl);
		free(bs.cnt);
		freeMontyStack(*stk);
		exit(EXIT_FAILURE);
	}
	hd = *stk;
	if (hd->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cntr);
		fclose(bs.fl);
		free(bs.cnt);
		freeMontyStack(*stk);
		exit(EXIT_FAILURE);
	}
	ax = hd->next->n % hd->n;
	hd->next->n = ax;
	*stk = hd->next;
	free(hd);
}
