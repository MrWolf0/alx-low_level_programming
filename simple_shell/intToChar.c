#include "shell.h"

/**
 *convertIntToChar - funciton that convert integer to character
 *@n: integer to convert
 *Return: character pointer
 */
char *
	convertIntToChar(unsigned int n)
	{
		int len = 0, i = 0;
		char *s;

		len = intlen(n);
		s = malloc(len + 2);

		if (!s)
		{
			free(s);
			return (NULL);
		}

		*s = '\0';

		while (n / 10)
		{
			s[i] = (n % 10) + '0';
			n /= 10;
			i++;
		}

		s[i] = (n % 10) + '0';
		reverseArray(s, len);
		s[i + 1] = '\0';

		return (s);
	}
