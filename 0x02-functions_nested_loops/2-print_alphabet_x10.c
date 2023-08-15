#include "main.h"

/**
 *print_alphabet_x10 - print alphabet
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	/*indext to itrate the output for 10 times*/
	int x = 0;
	/*using ASCII tabel to geeting char of a given number*/
	int i = 97;
	for (x = 0; x < 10; x++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
