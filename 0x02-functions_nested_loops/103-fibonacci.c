/*
 *File: 102-fibonacci.c
 *Auth: Brennan D Baraban
 */
#include <stdio.h>

/**
 *main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *       separated by a comma followed by a space.
 *
 *Return: Always 0.
 */
int main(void)
{
	unsigned long per_num = 0, next_num = 1, sum = 0;

	for (;;)
	{
		if (sum > 4000000)
		{
			break;
		}

		sum = per_num + next_num;
		printf("%lu, ", sum);
		per_num = next_num;
		next_num = sum;
	}

	return (0);
}
