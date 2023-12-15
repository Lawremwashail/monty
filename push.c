#include "monty.h"
/**
 * func_push - function that adds node to top of the stack
 * @head stack head
 * @line_num: line_number 
 */

void func_push(stack_t **head, unsigned int line_num)
{
	int n;
	int i = 0;
	int flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				flag = 1; }
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_num);
			fclose(bus.file_pointer);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); 
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		fclose(bus.file_pointer);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.mode_switch == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
