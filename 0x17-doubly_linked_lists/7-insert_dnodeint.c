#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *test = *h;
	dlistint_t *new_node;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (test)
	{
		test = test->next;
		if (test == NULL)
		{
			return (NULL);
		}
		idx--;
	}
	if (test->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = test;
	new_node->next = test->next;
	test->next->prev = new_node;
	test->next = new_node;
}

