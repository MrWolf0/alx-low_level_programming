/*
 * ============================================================================
 * Project     : 0x13-more_singly_linked_lists.c
 * Author      : MrWolf
 * Version     :
 * Copyright   : GNU
 * Description : a function that returns the nth node of a listint_t .
 * ============================================================================
 *
 *
 * 7-get_nodeint.c
 *
 *  Created on: Sep 26, 2023
 */
#include "lists.h"

/**
 * get_nodeint_at_index - get index of a given node of
 *                        a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: the located node or null .
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
