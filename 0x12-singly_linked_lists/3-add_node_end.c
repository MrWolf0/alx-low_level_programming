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
#include <string.h>
/**
 * add_node_end -  add a new node at the end of a list_t list.
 * @head: pointer to the head of the list_t list.
 * @str:  string to be added to the list_t list.
 * Return:the new element otherwise null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	int len = 0;

	list_t *temp = *head;

	new_node = malloc(sizeof(list_t));

	while (str[len])
	{
		len++;

	}
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	return (new_node);
}
