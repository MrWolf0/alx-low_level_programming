#include "main.h"

/**
 *print_triangle - print  prints a triangle in reverse way
 *from right to left
 *@size: is the number of rows of the triangle
 *Return: Always 0.
 */
void print_triangle(int size)
{
	/*you need number of rows and columns and a counter*/
	int row = 0;
	int column = 0;
	int counterx = 0;

	/*the while loop to itrate row moving horizantal*/
	if (size > 0)
	{
		while (row < size)
		{ /*here we move from the greater number to the smallest */
			/*starting from the last index putting a space in evey coulm */
			/*that is vaild until row > coulmn replace the space with #*/
			for (column = size - 1; column > row; column--)
			{
				_putchar(' ');
			}

			for (counterx = 0; counterx <= column; counterx++)
			{
				_putchar('#');
			}

			row++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
