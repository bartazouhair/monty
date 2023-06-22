#include "monty.h"
/**
 * pushMonty - to add node to the stack
 * @stk: it's stack head
 * @cntr: it's line number
 * Return: void
 */
void pushMonty(stack_t **stk, unsigned int cntr)
{
	int n, jb = 0, fg = 0;

	if (bs.argm)
	{
		if (bs.argm[0] == '-')
			jb++;
	for (; bs.argm[jb] != '\0'; jb++)
	{
		if (bs.argm[jb] > 57 || bs.argm[jb] < 48)
		fg = 1;
	}
	if (fg == 1)
	{
	fprintf(stderr, "L%d: usage: push integer\n", cntr);
	fclose(bs.fl);
	free(bs.cnt);
	freeMontyStack(*stk);
	exit(EXIT_FAILURE);
	}
	}
	else
	{
	fprintf(stderr, "L%d: usage: push integer\n", cntr);
	fclose(bs.fl);
	free(bs.cnt);
	freeMontyStack(*stk);
	exit(EXIT_FAILURE);
	}
	n = atoi(bs.argm);
	if (bs.li == 0)
	addMontynode(stk, n);
	else
	queueMonty(stk, n);
}
