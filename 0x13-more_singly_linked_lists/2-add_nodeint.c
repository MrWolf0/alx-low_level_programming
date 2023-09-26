/*
 * ============================================================================
 * Project     : 0x13-more_singly_linked_lists.c
 * Author      : MrWolf
 * Version     :
 * Copyright   : GNU
 * Description : adds a new node at the beginning of a listint_t list.
 * ============================================================================
 *
 *
 * 2-add_nodeint.c
 *
 *  Created on: Sep 26, 2023
 */
#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: A pointer to the head of the list_t list.
 * @n: the value of the new node in list
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
/*the double pointer **head is used as following*/
/*first we need to hold the address of value that pointer in list point to*/
/*after that we need to store the address of that pointer*/
/*because in linkedlist the memory accessed randomly not continuously*/
/*so second pointer is point to address not a value while the first*/
/*point to a value so **head is contain 2 values the address*/
/* point to the first value*/
/*in linkedlist and the address that used by a pointer to point to */
/*the first address*/
	listint_t *new;

/*assign memory allocation to the new node */
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
/*since linkedlist contain data and the address of next node*/
/*also here the new node will be the first node of the linkedlist*/
/*so the head pointer must point to the first value in linkedlist which is n */
/*now we store the next address in first node*/
/*which was the first node in linkedlist and as mentioned */
/* using double pointer to store the address of head and the pointer */
/*which point to that address so here*/
/*we assign the first node to point the old first*/
/*address before insertion process which is the first*/
/*pointer in the double pointer **head  */
/*second pointer of head which point to the address of first node before */
/*we will assign it to point to the new node*/

		new->next = *head;

		*head = new;

		return (new);
}
