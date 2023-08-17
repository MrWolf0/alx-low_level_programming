#include <stdio.h>
/**
 * main - print fizz and buzz
*
 * Return: Always 0.
 */
int main(void)
{
	int counter;
	int multi = 3 * 5;

	for (counter = 1; counter <= 100; counter++)
	{
		if (counter % multi == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (counter % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (counter % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", counter);
		}
	}
         printf("\n");
	return (0);
}
