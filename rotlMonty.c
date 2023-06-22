#include "monty.h"

/**
 * rotlMonty - Rotates the stack to the top
 * @stk: Pointer to the stack
 * @cntr: Line number
 *
 * Return: void
 */
void rotlMonty(stack_t **stk, __attribute__((unused)) unsigned int cntr)
{
	stack_t *tp = *stk, *ax;

	if (*stk == NULL || (*stk)->next == NULL)
	{
		return;
	}
	ax = (*stk)->next;
	ax->prev = NULL;
	while (tp->next != NULL)
	{
		tp = tp->next;
	}
	tp->next = *stk;
	(*stk)->next = NULL;
	(*stk)->prev = tp;
	(*stk) = ax;
}
