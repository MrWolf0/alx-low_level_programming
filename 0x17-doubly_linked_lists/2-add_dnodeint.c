#include "lists.h"
/**
 * add_dnodeint - add a nod at the begnning of the list.
 * @head: The head of the dlistint_t list.
 *@n: The number will be sotred in the node.
 *
 * Return: The address of new node in the list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		printf("%s\n", "Error: Can't malloc");
		return (NULL);
	}
	else
	{
		new_node->data = n;
		new_node->previous = NULL;
		new_node->next = *head;
		if (*head != NULL)
		{
			(*head)->previous = new_node;
		}
		*head = new_node;
	}
	return (new_node);
}

