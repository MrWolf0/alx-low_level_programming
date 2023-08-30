#include "main.h"
/**
 * find_strlen - returns length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
int counter = 0;
while (*s++)
{
counter++;
}
/*printf("%d\n",counter/2);*/
return (counter);
}

/**
 * check_palindrome - checks if a string is a palindrome.
 * @s: the string to be checked.
 * @len: the length of s.
 * @index: the index 0.
 *
 * Return: 1 if the string is a palindrome
 *if the string is not a palindrome return 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string to be checked.
 *
 * Return: 1 If the string is a palindrome.
 * if the string is not a palindrome return 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

