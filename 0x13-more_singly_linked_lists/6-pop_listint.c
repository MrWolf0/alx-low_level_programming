/*
 * ============================================================================
 * Project     : 0x13-more_singly_linked_lists.c
 * Author      : MrWolf
 * Version     :
 * Copyright   : GNU
 * Description : a function that deletes the head node of a listint_t
 * ============================================================================
 *
 *
 * 6-pop_listint.c
 *
 *  Created on: Sep 26, 2023
 */
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;
/*check if first value in list is empty */
	if (*head == NULL)
	{
		return (0);
	}
/*getting address of first node containing its data as second pointer*/
	tmp = *head;
/*getting data*/
	data = (*head)->n;
/*make the second pointer point to the second node*/
	*head = (*head)->next;

	free(tmp);

	return (data);
}


