#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#define  _POSIX_C_SOURCE 200809L

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct bus_y - variables -args, file, line contents
 * @argm: value
 * @fl: pointer to monty files
 * @cnt: line contents
 * @li: flag change stack <-> queue
 * Description: it's carries values through the program
*/

typedef struct bus_y
{
	char *argm;
	FILE *fl;
	char *cnt;
	int li;
} bus_y;
extern bus_y bs;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void addMonty(stack_t **stk, unsigned int cntr);
void addMontynode(stack_t **stk, int n);
void divMonty(stack_t **stk, unsigned int cntr);
int executeMonty(char *cont, stack_t **stk, unsigned int cntr, FILE *f);
void freeMontyStack(stack_t *stk);
void montyStack(stack_t **stk, unsigned int cntr);
void modMonty(stack_t **stk, unsigned int cntr);
void mulMonty(stack_t **stk, unsigned int cntr);
void nopMonty(stack_t **stk, unsigned int cntr);
void pallMonty(stack_t **stk, unsigned int cntr);
void pcharMonty(stack_t **stk, unsigned int cntr);
void pintMonty(stack_t **stk, unsigned int cntr);
void popMonty(stack_t **stk, unsigned int cntr);
void pstrMonty(stack_t **stk, unsigned int cntr);
void pushMonty(stack_t **stk, unsigned int cntr);
void addMontyqueue(stack_t **stk, int n);
void queueMonty(stack_t **stk, unsigned int cntr);
void rotlMonty(stack_t **stk, unsigned int cntr);
void rotrMonty(stack_t **stk, __attribute__((unused)) unsigned int cntr);
void subMonty(stack_t **stk, unsigned int cntr);
void swapMonty(stack_t **stk, unsigned int cntr);
char *realloc_(char *p, unsigned int old_sz, unsigned int new_sz);
ssize_t getStdin(char **lptr, int f);
char *cleanLine(char *cntr);
#endif

