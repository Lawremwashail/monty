#include "monty.h"
/**
 * free_stack - functionn that frees a doubly linked list
 * @head: head stack
 */
void free_stack(stack_t *head)
{
	stack_t *result;

	result = head;
	while (head)
	{
		result = head->next;
		free(head);
		head = result;
	}
}
