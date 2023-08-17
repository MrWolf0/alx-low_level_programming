#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int times;
	int new_line;

	if (n > 0)
	{
		for (times = 0; times < n; times++)
		{
			for (new_line = 0; new_line < times; new_line++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			/*stop befor but a new line at the end of loop*/
			if (times == n - 1)
			{
				break;
			}

			_putchar('\n');
		}
	}

	_putchar('\n');
}
