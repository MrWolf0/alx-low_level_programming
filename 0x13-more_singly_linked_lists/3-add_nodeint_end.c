/*
 * ============================================================================
 * Project     : 0x13-more_singly_linked_lists.c
 * Author      : MrWolf
 * Version     :
 * Copyright   : GNU
 * Description : adds a new node at the end of a listint_t list.
 * ============================================================================
 *
 *
 * 3-add_nodeint_end.c
 *
 *  Created on: Sep 26, 2023
 */
#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
/*make the new node point to null which mean it is the last node*/
		new->n = n;
		new->next = NULL;
/*check if first value in list is empty */
		if (*head == NULL)
		{
			*head = new;
		}
/*if there are data in list we will assign our pointer var last */
/* to the first node to iterate the list checking for null address*/
/*by shifting the node one by one*/
		else
		{
/*assign the second pointer of double pointer which*/
/* point to address not value*/
/* which mean the address that point to the first node we will assign*/
			/*to the last node*/
			last = *head;
			while (last->next != NULL)
				last = last->next;
			last->next = new;
		}
/*return the second pointer of head*/
		return (*head);
	}
