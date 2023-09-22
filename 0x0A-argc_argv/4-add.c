#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the program name, followed by a new line.
 * @argc:  number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int argc, char *argv[])
{
	int n, index, sum = 0;
/*the first loop is to walkthrough the number of arguments*/
	for (n = 1; n < argc; n++)
	{
/*the second loop is to walkthrough each varaiable in one argument pass*/
/*as a signle argumet*/
		for (index = 0; argv[n][index]; index++)
		{
/*check for only numbers passed  in a single argument passed*/
/*note here we check by using ascii value 0 = 48 */
			if (argv[n][index] < '0' || argv[n][index] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
/*after checking okay covert num from *char to int */
		sum += atoi(argv[n]);
	}

	printf("%d\n", sum);

	return (0);
}
