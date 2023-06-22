#include "monty.h"

/**
 * popMonty - Removes the top element from the stack
 * @stk: Pointer to the stack head
 * @cntr: Line number
 *
 * Return: void
 */
void popMonty(stack_t **stk, unsigned int cntr)
{
	stack_t *hd;

	if (*stk == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", cntr);
		fclose(bs.fl);
		free(bs.cnt);
		freeMontyStack(*stk);
		exit(EXIT_FAILURE);
	}
	hd = *stk;
	*stk = hd->next;
	free(hd);
}
