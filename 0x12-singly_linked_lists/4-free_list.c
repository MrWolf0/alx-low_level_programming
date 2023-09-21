/*
 *============================================================================
 *Name        : Linked_list.c
 *Author      : Mr Wolf
 *Version     :
 *Copyright   : Phoenix
 *Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees list
 * @head: list_t to freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
