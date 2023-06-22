#include "monty.h"

/**
 * freeMontyStack - Frees a doubly linked list
 * @stk: Pointer to the stack
 *
 * Return: void
 */
void freeMontyStack(stack_t *stk)
{
	stack_t *ax;

	ax = stk;
	while (stk)
	{
		ax = stk->next;
		free(stk);
		stk = ax;
	}
}
