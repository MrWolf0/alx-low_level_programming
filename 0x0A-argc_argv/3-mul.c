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
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
