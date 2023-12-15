#include "monty.h"
/**
 * func_pop - functiont that pop stack from top
 * @head: stack head
 * @line_num: line_number
 */

void func_pop(stack_t **head, unsigned int line_num)
{
	stack_t *current;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(bus.file_pointer);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	*head = current->next;
	free(current);
}
