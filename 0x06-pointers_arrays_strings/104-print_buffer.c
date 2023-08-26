#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 * the byte position, then showing the hex content,
 * then displaying printable charcaters.
 * @p: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *p, int size)
{
	int num_byte, index;

	for (num_byte = 0; num_byte < size; num_byte += 10)
	{
		printf("%08x: ", num_byte);
		for (index = 0; index < 10; index++)
		{
			if ((index + num_byte) >= size)
			{
				printf("  ");
			}
			else
			{
				printf("%02x", *(p + index + num_byte));
			}
			if ((index % 2) != 0 && index != 0)
			{
				printf(" ");
			}
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + num_byte) >= size)
				break;
			else if (*(p + index + num_byte) >= 31 && *(p + index + num_byte) <= 126)
			{
				printf("%c", *(p + index + num_byte));
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");
	}
	if (size <= 0)
	{
		printf("\n");
	}
}
