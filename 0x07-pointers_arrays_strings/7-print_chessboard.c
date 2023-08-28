#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int indexA, indexB;

	for (indexA = 0; indexA < 8; indexA++)
	{
		for (indexB = 0; indexB < 8; indexB++)
		{
			_putchar(a[indexA][indexB]);
		}
		_putchar('\n');
	}
}
