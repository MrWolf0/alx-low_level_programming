#include "main.h"
/**
 * _strcpy -copies the string pointed to by src to the buffer
 * pointed to by dest.
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int counter = 0;
while (src[counter] != '\0')
{
dest[counter] = src[counter];
counter++;
}
return (dest);
}
