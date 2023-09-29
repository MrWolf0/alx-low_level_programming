/*
 *============================================================================
 * Name        : bits_manipulation.c
 * Author      : MrWolf0
 * Version     : 1.0
 * Copyright   : GNU
 * Description : 4-clear_bit.c
 ============================================================================
 */
#include "main.h"

/**
 * clear_bit - make the value of a given bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: 1 if done -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
