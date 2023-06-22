#include "monty.h"

/**
 * pallMonty - Prints the stack
 * @stk: Pointer to the stack head
 * @cntr: Not used
 *
 * Return: void
 */
void pallMonty(stack_t **stk, unsigned int cntr)
{
	stack_t *hd;
	(void)cntr;

	hd = *stk;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
