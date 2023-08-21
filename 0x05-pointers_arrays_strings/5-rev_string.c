#include "main.h"
/**
* rev_string -print a giving string in reverse order and change the value
* of giving address to the new value
*@str:  is a pointer point to the address of current index in a giving string
*Return: Always 0.
*/
void rev_string(char *str)
{
/*swap the string using 2 counter one start from 0 and second start from*/
/*last index using a temp variable*/
/*while loop will stop if the current index = null terminator*/
int length = 0;
int last = 0;
int start = 0;
char temp;
/*frist loop to get length of the string */
while (str[length] != '\0')
{
length++;
}
/*because we start from index 0 and if length = 10*/
/*the last index will be 9 */
last = length - 1;
/*store the value of the last index in temp and swap it to*/
/*the frist index until index = 4  particulary letter c */
while (start  < last)
{
temp = str[last];
str[last] = str[start];
str[start] = temp;
start++;
last--;
}
}

