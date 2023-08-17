#include "main.h"

/**
 *print_most_numbers - print numbers from 0 to 9 using _puchar() expect 2,4
 *Return: Always 0.
 */
void print_most_numbers(void)
{
	int counter;

	for (counter = 0; counter <= 9; counter++)
	{
		if (counter + '0' == '2' || counter + '0' == '4')
		{
			continue;
		}

		_putchar(counter + '0');
	}

	_putchar('\n');
}
