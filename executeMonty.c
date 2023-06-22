#include "monty.h"
/**
 * executeMonty - to executes the opcode
 * @stk: it's stack linked list - stack
 * @cntr: it's line counter
 * @f: it's poiner to monty file
 * @cont: line content
 * Return: void
 */
int executeMonty(char *cont, stack_t **stk, unsigned int cntr, FILE *f)
{
	instruction_t opstt[] = {
		{"add", addMonty},
		{"div", divMonty},
		{"stack", montyStack},
		{"mod", modMonty},
		{"mul", mulMonty},
		{"nop", nopMonty},
		{"pall", pallMonty},
		{"pchar", pcharMonty},
		{"pint", pintMonty},
		{"pop", popMonty},
		{"pstr", pstrMonty},
		{"push", pushMonty},
		{"queue", queueMonty},
		{"rotl", rotlMonty},
		{"rotr", rotrMonty},
		{"sub", subMonty},
		{"swap", swapMonty},
		{NULL, NULL}};

	unsigned int i = 0;
	char *ops;

	ops = strtok(cont, " \n\t");
	if (ops && ops[0] == '#')
		return (0);
	bs.argm = strtok(NULL, " \n\t");
	while (opstt[i].opcode && ops)
	{
		if (strcmp(ops, opstt[i].opcode) == 0)
		{
			opstt[i].f(stk, cntr);
			return (0);
		}
		i++;
	}
	if (ops && opstt[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", cntr, ops);
		fclose(f);
		free(cont);
		freeMontyStack(*stk);
		exit(EXIT_FAILURE);
	}
	return (1);
}
