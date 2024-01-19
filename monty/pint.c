#include "monty.h"

/**
 *f_pint - prints the top
 *@head: stack head
 *@counter: line_number
 *Return: no return
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(__file__);
		free(__line_content__);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}