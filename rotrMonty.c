#include "monty.h"

/**
 * rotrMonty - Rotates the stack to the bottom
 * @stk: Pointer to the stack
 * @cntr: Line number
 *
 * Return: void
 */
void rotrMonty(stack_t **stk, __attribute__((unused)) unsigned int cntr)
{
	stack_t *cp;

	cp = *stk;
	if (*stk == NULL || (*stk)->next == NULL)
	{
		return;
	}
	while (cp->next)
	{
		cp = cp->next;
	}
	cp->next = *stk;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*stk)->prev = cp;
	(*stk) = cp;
}
