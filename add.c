#include "monty.h"
/**
 * func_add - function that adds the top two elements of the stack.
 * @head: stack head
 * @line_num: line_number
 */
void func_add(stack_t **head, unsigned int line_num)
{
	stack_t *current;
	int len = 0;
	int result;

	current = *head;

	while (current)
	{
		current = current->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		fclose(bus.file_pointer);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	result = current->n + current->next->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
