#include "monty.h"

/**
 * addMontynode - Adds a new node to the stack
 * @stk: Pointer to the stack
 * @n: New value
 *
 * Return: void
 */
void addMontynode(stack_t **stk, int n)
{
	stack_t *nw_node, *ax;

	ax = *stk;
	nw_node = malloc(sizeof(stack_t));
	if (nw_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (ax)
		ax->prev = nw_node;
	nw_node->n = n;
	nw_node->next = *stk;
	nw_node->prev = NULL;
	*stk = nw_node;
}
