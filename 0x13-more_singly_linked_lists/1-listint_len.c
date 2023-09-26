/*
 * ============================================================================
 * Project        : 0x13-more_singly_linked_lists.c
 * Author      : MrWolf
 * Version     :
 * Copyright   : GNU
 * Description : returns the number of elements in a linked listint_t list.
 * ============================================================================
 *
*
 * 1-listint_len.c
 *
 *  Created on: Sep 26, 2023
 *      Author: nasser_eldin
 */
#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
