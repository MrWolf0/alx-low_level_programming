#include <stdio.h>

/**
 *main - print fizz and buzz
 *
 *Return: Always 0.
 */
int main(void)
{
	int counter;
	int multi = 3 * 5;
/* the idea here how i put FizzBuzz because the number we will replace*/
/*has no remider when divied by 3 or 5 such as 15 % 3 == 15 % 5 = 0*/
/*so we must check the the remider by multply 3*5 = 15*/
/*so we check every number by divid it by 15 frist then check later 3 and 5*/
	for (counter = 1; counter <= 100; counter++)
	{
		if (counter % multi == 0)
		{
			printf("FizzBuzz");
		}
		else if (counter % 3 == 0)
		{
			printf("Fizz");
		}
		else if (counter % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", counter);
		}

		if (counter == 100)
			break;
		printf(" ");
	}

	printf("\n");
	return (0);
}
