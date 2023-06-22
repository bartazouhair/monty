#include "monty.h"
/**
 * pstrMonty - to prints the string starting at the top of the stack,
 * followed by a new
 * @stk: it's stack head
 * @cntr: it's line number
 * Return: void
*/
void pstrMonty(stack_t **stk, unsigned int cntr)
{
	stack_t *hd;
	(void)cntr;

	hd = *stk;
	while (hd)
	{
		if (hd->n > 127 || hd->n <= 0)
		{
			break;
		}
		printf("%c", hd->n);
		hd = hd->next;
	}
	printf("\n");
}
