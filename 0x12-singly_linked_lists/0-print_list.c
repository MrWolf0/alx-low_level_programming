/*
 ============================================================================
 Name        : Linked_list.c
 Author      : Mr Wolf
 Version     :
 Copyright   :
 Description : print a a linked_list
 ============================================================================
 */
#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h:  list_t list.
 *
 * Return: number of nodes in h and print them.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		    {
			printf("[0] (nil)\n");
		    }
		else
		    {
		    /*len is the data and str the next add of next data*/
			printf("[%d] %s\n", h->len, h->str);
		    }

		nodes++;
		h = h->next;
	}

	return (nodes);
}
