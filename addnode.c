#include "monty.h"
/**
 * addnode - function that adds node to the head stack
 * @head: head of the stack
 * @n: new_value
 */
void addnode(stack_t **head, int n)
{
	stack_t *n_node;
	stack_t *result;

	result = *head;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (result)
		result->prev = n_node;
	n_node->n = n;
	n_node->next = *head;
	n_node->prev = NULL;
	*head = n_node;
}
