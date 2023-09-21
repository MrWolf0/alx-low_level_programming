/*
 ============================================================================
 Name        : Linked_list.c
 Author      : Mr Wolf
 Version     :
 Copyright   :
 Description : add a new node at the beginning of a linked_list
 ============================================================================
 */
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add a new node at the beginning
 * of a list_t list.
 * @head: pointer to the head of the list_t list.
 * @str:  string to be added to the list_t list.
 *
 * Return: the address of the new element or null.
 */

list_t *add_node(list_t **head, const char *str)
    {
	list_t *new_node;
	int len = 0;
	new_node = malloc(sizeof(list_t));
	while(str[len])
	    {
		len++;

	    }
	if(!new_node)
	    {
		return (NULL);
	    }
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return(new_node);
    }
