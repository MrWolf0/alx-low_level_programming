#include "main.h"

/**
 *get_squ - finds only natural square root of a number.
 *@n: the number to find the square root of.
 *@root: the root to be tested.
 *
 *Return: If the number has a natural square root - the square root.
 *        If the number does not have a natural square root - -1.
 */
int get_squ(int n, int root)
{
	if ((root * root) == n)
		return (root);

	if (root == n / 2)
		return (-1);
	return (get_squ(n, root + 1));
}

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n:number to return the square root of.
 *
 *Return: the natural square root of n.
 *        will return -1 if the root float or double.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (get_squ(n, root));
}
