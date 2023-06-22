#include "monty.h"
/**
 * pcharMonty - to prints the char at the top of the stack,
 * followed by a new line
 * @stk: it's stack head
 * @cntr: it's line number
 * Return: void
*/
void pcharMonty(stack_t **stk, unsigned int cntr)
{
	stack_t *hd;

	hd = *stk;
	if (!hd)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", cntr);
		fclose(bs.fl);
		free(bs.cnt);
		freeMontyStack(*stk);
		exit(EXIT_FAILURE);
	}
	if (hd->n > 127 || hd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", cntr);
		fclose(bs.fl);
		free(bs.cnt);
		freeMontyStack(*stk);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hd->n);
}
