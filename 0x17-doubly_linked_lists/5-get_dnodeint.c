#include "lists.h"
/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
/* This loop is to find and print the number inside the node */
/* While index > 0 mean when TRUE */
/* If index == 0 mean false */
	while (index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
/* Here we move node by node and if the index 5 */
/* It will  decreament the index until it = 0*/
/* then ending the loop return the data inside */
/* the node that has number of index */
		head = head->next;
		index--;
	}
	return (head);
}

