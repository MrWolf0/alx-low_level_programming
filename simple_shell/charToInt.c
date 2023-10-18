#include "shell.h"

/**
 *intToChar -convert the number in a giving string to integer value
 *@s:  is a pointer point to the address of current index in giving string
 *Return: Always 0.
 */
int
intToChar(char *s)
{
	int counter = 0;
	int sign_flag = 1;
	unsigned int num = 0;

	while (s[counter])
	{
		if (s[counter] == '-')
		{
			sign_flag = -sign_flag;
		}
		else if (s[counter] >= '0' && s[counter] <= '9')
		{
			num = (num * 10) + (s[counter] - '0');
		}
		else if (num)
		{
			break;
		}

		counter++;
	}

	return (num * sign_flag);
}
