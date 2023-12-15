#include "monty.h"
/**
 * func_queue - prints the top
 * @head: stack head
 * @line_num: line_number
 * 
 */
void func_queue(stack_t **head, unsigned int line_num)
{
	(void)head;
	(void)line_num;
	bus.mode_switch = 1;
}

/**
 * addqueue - function that adds node to the tail stack
 * @n: new_value
 * @head: head of the stack 
 */

void addqueue(stack_t **head, int n)
{
	stack_t *n_node, *result;

	result = *head;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error\n");
	}
	n_node->n = n;
	n_node->next = NULL;
	if (result)
	{
		while (result->next)
			result = result->next;
	}
	if (!result)
	{
		*head = n_node;
		n_node->prev = NULL;
	}
	else
	{
		result->next = n_node;
		n_node->prev = result;
	}
}
