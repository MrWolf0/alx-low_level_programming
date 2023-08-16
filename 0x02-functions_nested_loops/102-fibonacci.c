/*
 * File: 102-fibonacci.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long per_num = 0, next_num = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = per_num + next_num;
		printf("%lu", sum);

		per_num = next_num;
		next_num = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
