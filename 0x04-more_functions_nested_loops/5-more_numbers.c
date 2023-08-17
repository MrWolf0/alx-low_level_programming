#include "main.h"

/**
 *more_numbers - print numbers from 0 to 14 using _puchar() 10 times
 *Return: Always 0.
 */
void more_numbers(void)
{
/* we need two counters first to itrate number of times to print the loop*/
/* second to itrate numbers from 0 to 14*/
	int counter;
	int while_counter = 0;

	while (while_counter < 10)
	{
		for (counter = 0; counter <= 14; counter++)
		{
			if (counter > 9)
			{
				_putchar(counter / 10 + '0');
			}
				_putchar(counter % 10 + '0');
		}

		while_counter++;
		_putchar('\n');
	}
}
