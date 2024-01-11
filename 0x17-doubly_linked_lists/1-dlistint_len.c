#include "lists.h"
/**
 * dlistint_len - Prints len of the list.
 * @h: The head of the dlistint_t list.
 *
 * Return: Length of the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
/* Here we must initialize nodes to 0*/
/* Or it will it will contain garbage values*/
size_t nodes = 0;
while (h)
{
	nodes++;
	h = h->next;
}
return (nodes);
}

