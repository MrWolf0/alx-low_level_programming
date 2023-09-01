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

	for (n = 1; n < argc; n++)
	{
		for (index = 0; argv[n][index]; index++)
		{
			if (argv[n][index] < '0' || argv[n][index] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[n]);
	}

	printf("%d\n", sum);

	return (0);
}
