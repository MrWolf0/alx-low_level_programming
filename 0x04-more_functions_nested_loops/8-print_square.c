#include "main.h"

/**
 *print_square -print # n* n times for n times sperated by new line
 *such as 2 * 2 here total # is 4 and number of lines 2
 *@size: The number of times to print the char
 */
void print_square(int size)
{
	int counter_1 = 0;
	int counter_2 = 0;

	while (counter_1 < size)
	{
		for (counter_2 = 0; counter_2 < size; counter_2++)
		{
			_putchar('#');
		}
		counter_1++;
		_putchar('\n');
	}
}
