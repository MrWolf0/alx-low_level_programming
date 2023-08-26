#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    printf("%s\n", buffer);
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}
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
			 if (*(p + index + num_byte) >= 31 && *(p + index + num_byte) <= 126)
			{
				printf("%c", *(p + index + num_byte));
			}
			else if ((index + num_byte) > size)
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
