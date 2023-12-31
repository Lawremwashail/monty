#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>
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
 * struct bus_s - structure to store program related values
 * @arg: pointer to argument value
 * @file_pointer: pointer to monty file
 * @content: pointer to line content
 * @mode_switch: flag that changes between stack and queue
 * Description: structure to carry values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file_pointer;
	char *content;
	int mode_switch;
}  bus_t;

extern bus_t bus;
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

void func_push(stack_t **head, unsigned int line_num);
void func_pall(stack_t **head, unsigned int line_num);
void func_pint(stack_t **head, unsigned int line_num);
void func_pop(stack_t **head, unsigned int line_num);
void func_swap(stack_t **head, unsigned int line_num);
void func_add(stack_t **head, unsigned int line_num);
void func_nop(stack_t **head, unsigned int line_num);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void func_queue(stack_t **head, unsigned int line_num);
void func_div(stack_t **head, unsigned int line_num);
void free_stack(stack_t *head);

#endif
