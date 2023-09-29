/*
 *============================================================================
 * Name        : bits_manipulation.c
 * Author      : MrWolf0
 * Version     : 1.0
 * Copyright   : GNU
 * Description : 1-print_binary.c
 *============================================================================
*/

#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
