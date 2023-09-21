/*
 *============================================================================
 *Name        : Linked_list.c
 *Author      : Mr Wolf
 *Version     :
 *Copyright   : Phoenix
 *Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - calculate number of elements in
 *a linked list_t list.
 * @h:  linked list_t list.
 *
 * Return:  number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			counter++;
		}
		h = h->next;
	}
	return (counter);

}
