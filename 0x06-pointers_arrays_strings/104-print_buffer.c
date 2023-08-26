#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @p: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *p, int size)
{
	int num_byte, index;
/*the master loop start from 0 to 10 bytes only */
/*here the loop check all buffer content and print only*/
/*10 bytes per round untile finsh buffer contet*/
	for (num_byte = 0; num_byte < size; num_byte += 10)
	{
/*show the position of bytes in memory in formate hex*/
/*using 8 fromate and this position will increament by 10*/
		printf("%08x: ", num_byte);
/*this loop to move *p index by index through 10 bytes*/
/*assume in first 10 bytes from 0 to 10 we have 10 characters*/
/*this loop to itrate 10 characters one by one*/
		for (index = 0; index < 10; index++)
		{
			if ((index + num_byte) >= size)
				printf("  ");
/*here *(p+index+byte) mean print the value */
/*of the character in the index 0 in the first 10 bytes that */
/*exist in the address that *p point for */
/*for round 1 and so on until byte < size */

			else
				printf("%02x", *(p + index + num_byte));

			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}
/*this loop to divided 10 bytes 2 by 2 that mean */
/*we will have 5 coulmns each coulmn start from */
/*ASCII 32 to 126 ignore all character after escape character \*/
/*by printing . instated of escape characte */
/* to avoid buffer overflow just break the loop because */
/*if you note if byte = 120 and the index 9*/
/*became 129 > 126 the total size of buffer in memory in bytes*/
		for (index = 0; index < 10; index++)
		{
			if ((index + num_byte) >= size)
				break;

			else if (*(p + index + num_byte) >= 31 &&
				 *(p + index + num_byte) <= 126)
				printf("%c", *(p + index + num_byte));

			else
				printf(".");
		}

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
