/*
 * 0-hash_table_create.c
 *
 *  Created on: Feb 1, 2024
 *      Author: nasser
 */
#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *my_table = malloc(sizeof(hash_table_t));

	if (my_table == NULL)
	{
		return (NULL);
	}
	my_table->size = size;
	my_table->array = malloc(sizeof(hash_table_t  *) * size);
	if (my_table->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		my_table->array[i] = NULL;
	}
	return (my_table);
}
