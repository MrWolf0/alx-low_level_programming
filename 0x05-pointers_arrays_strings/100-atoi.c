#include "main.h"
/**
 * _atoi -convert the number in a giving string to integer value
 *@s:  is a pointer point to the address of current index in giving string
 *Return: Always 0.
 */
int _atoi(char *s)
{
/*creating variables counter is an index to itrate string indices*/
/*sign_flag is avariable to set when restult is negative*/
/*sign_flag as SF in EFLAGS */
/*num to hold the number from a giving string*/
int counter = 0;
int sign_flag = 1;
int num = 0;
/*loop to itrate sting's indices*/
while (s[counter])
{
/*condition to check if there is a negative sgin if it is assign*/
/*sign_flag to be -sign_flag*/
if (s[counter] == '-')
{
sign_flag = -sign_flag;
}
/*if there is no - sgin and the letter betwwen 0 and 9 */
/*the 10 is an offest to make sure that num hold the next digit if found*/
else if (s[counter] >= '0' && s[counter] <= '9')
{
num = (num * 10) + (s[counter] - '0');
}
/*if there is more data numbers break the execuion*/
/*mean that if num is have a value and it will always true*/
/*but we will ignore them becuase we get the a sequance of number eailer*/
else if (num)
{
break;
}
counter++;
}
/*return the value with sign_flag*/
return (num *sign_flag);
}
