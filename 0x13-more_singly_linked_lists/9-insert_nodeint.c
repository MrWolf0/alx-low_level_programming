/**
 * ============================================================================
 * Project     : 0x13-more_singly_linked_lists.c
 * Author      : MrWolf
 * Version     :
 * Copyright   : GNU
 * Description : a function that inserts a new node at a given position.
 * ============================================================================
 *
 *
 * 9-insert_nodeint.c
 *
 *  Created on: Sep 26, 2023
 */
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
/*here copy pointer point to the value in address point by head*/
	listint_t *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
/*if the location of insertion = 0 assign head to the new node*/
	if (idx == 0)
	{
		new->next = copy;
/*Assign address of first node to the address of new node*/
		*head = new;
		return (new);
	}
/*loop to identify the location*/
	for (node = 0; node < (idx - 1); node++)
	{
/*if no data presented*/
		if (copy == NULL || copy->next == NULL)
		{
			return (NULL);
		}

		copy = copy->next;
	}
/*insert new node by copy reference of copy pointer*/
	new->next = copy->next;
	copy->next = new;

	return (new);
}
