#define  _POSIX_C_SOURCE 200809L
#include "monty.h"
bus_y bs = {NULL, NULL, NULL, 0};

/**
 * main - to monty code interpreter glob
 * @argc: it's number of arguments
 * @argv: it's monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *cont;
	FILE *f;
	size_t sz = 0;
	ssize_t rl = 1;
	stack_t *stk = NULL;
	unsigned int cntr = 0;

	if (argc != 2)
	{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	bs.fl = f;
	if (!f)
	{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
	}
	while (rl > 0)
	{
	cont = NULL;
	rl = getline(&cont, &sz, f);
	bs.cnt = cont;
	cntr++;
	if (rl > 0)
	{
		executeMonty(cont, &stk, cntr, f);
	}
	free(cont);
	}
	freeMontyStack(stk);
	fclose(f);
	return (0);
}
