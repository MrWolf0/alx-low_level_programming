#include "main.h"

/**
 *times_table - print row*column for 9 times for 9 column
 *Description: print row*column for 9 times for 9 column
 *Return: Always 0.
 */
void times_table(void)
{
	/*mutiply 2 number save result in final_res*/
	int final_res = 0;
	int row, column;
	/*move vetical as column*/
	for (column = 0; column <= 9; column++)
	{
		/*move horizental as row*/
		for (row = 0; row <= 9; row++)
		{
			final_res = column * row;
			/*number greater than 10 */
			if (final_res > 9 && row <= = 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(final_res / 10 + '0');
				_putchar(final_res % 10 + '0');
			}

			/*number less than 10 */
			else
			{ 	/*incase the raw =0 the result will always 0*/
				if (row <= 9 && row != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				/*from row 1 putchar the result*/
				_putchar(final_res + '0');
			}
		}

		_putchar('\n');
	}
}
