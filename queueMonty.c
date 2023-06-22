#include "monty.h"

/**
 * queueMonty - to prints the top
 * @stk: it's stack stk
 * @cntr: it's line number
 * Return: void
 */
void queueMonty(stack_t **stk, unsigned int cntr)
{
	(void)stk;
	(void)cntr;
	bs.li = 1;
}

/**
 * addMontyqueue - to add node to the tail stack
 * @n: it's new value
 * @stk: stk of the stack
 * Return: void
 */
void addMontyqueue(stack_t **stk, int n)
{
	stack_t *nw_node, *ax;

	ax = *stk;
	nw_node = malloc(sizeof(stack_t));
	if (nw_node == NULL)
	{
	printf("Error\n");
	}
	nw_node->n = n;
	nw_node->next = NULL;
	if (ax)
	{
	while (ax->next)
	ax = ax->next;
	}
	if (!ax)
	{
	*stk = nw_node;
	nw_node->prev = NULL;
	}
	else
	{
	ax->next = nw_node;
	nw_node->prev = ax;
	}
}
