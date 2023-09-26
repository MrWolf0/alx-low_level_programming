/**
 * ============================================================================
 * Project        : 0x13-more_singly_linked_lists.c
 * Author      : MrWolf
 * Version     :
 * Copyright   : GNU
 * Description : Prints all the elements of a listint_t list.
 * ============================================================================
 */
/**
 * 0-print_listint.c
 *
 *  Created on: Sep 26, 2023
 *      Author: nasser_eldin
 */
#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	/*Declare a variable as size_t to count nodes */
	size_t count = 0;
/*loop through the memory locations*/
	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
