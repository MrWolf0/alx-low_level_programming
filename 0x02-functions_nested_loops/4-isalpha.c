#include "main.h"
/**
 *  _isalpha - check if the letter is alphabetic or not
* @char_:  is an ascii character
 * Return: Always 0.
 */
int _isalpha(int char_)
{
if (char_ >= 'a' && char_ <= 'z' || char_ >= 'A' && char_ <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

