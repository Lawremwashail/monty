#include "monty.h"
/**
 * func_pall - function that prints all values from the stack
 * @head: stack head
 * @line_num: line_number
 * Return: no return
 */
void func_pall(stack_t **head, unsigned int line_num)
{
	stack_t *current;
	(void)line_num;

	current = *head;
	if (current == NULL)
		return;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
