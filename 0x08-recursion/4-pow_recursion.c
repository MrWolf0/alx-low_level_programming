#include "main.h"

/**
 *_pow_recursion - Returns the value of x raised to the power of y.
 *@x: The number to be raised.
 *@y: The power.
 *
 *Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	/*why result = x not 0 ?*/
	/*because 0 *number = 0 :D */
	int result = x;
	/*checking sign - */
	if (y < 0)
		return (-1);
	/*number pow 0 always = 1*/
	else if (y == 0)
		return (1);
	/*call the fun until y<0*/
	result *= _pow_recursion(x, y - 1);

	return (result);
}
