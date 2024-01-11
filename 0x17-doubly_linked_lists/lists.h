/*
 * lists.h
 *
 *  Created on: Jan 11, 2024
 *      Author: nasser
 */

#ifndef LISTS_H_
#define LISTS_H_
#include <stdio.h>
#include <stddef.h>
typedef struct dlistint
{
int data;
struct dlistint *previous;
struct dlistint *next;
}dlistint_t;
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
#endif /* LISTS_H_ */

