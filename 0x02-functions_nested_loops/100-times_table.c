#include "main.h"

/**
 *print_times_table - print row*column for n times for n column
 *@number : print row*column forn times for n column
 *Return: Always 0.
 */
void print_times_table(int number)
{
	int final_res = 0;
	int row, column;
	if (number <= 15)
	{
		/*move vetical as column*/
		for (column = 0; column <= number; column++)
		{
		/*move horizental as row*/
			for (row = 0; row <= number; row++)
			{
				final_res = row * column;
				/*number betwwen 10 and 100 has 2 digit*/
				if (final_res > 9 && final_res < 100 && row <= number)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(final_res / 10 + '0');
					_putchar(final_res % 10 + '0');
				}
				/*number is greater than 100 has 3 digits*/
				else if (final_res >= 100 && final_res < 300 && row <= number)
				{
					_putchar(',');
					_putchar(' ');
					/* first digit*/
					_putchar((final_res / 10) / 10 + '0');
					/*second digit */
					_putchar((final_res / 10) % 10 + '0');
					/*last digit*/
					_putchar(final_res % 10 + '0');
				}
				else
				/*number less than 10 has one digit*/
				{
					if (row <= number && row != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}

					_putchar(final_res + '0');
				}
			}

			_putchar('\n');
		}
	}
}
