#include "main.h"
/**
 *  jack_bauer - print time of day in formate h:min
 * Description: prints time in formate h:min
 * Return: Always 0.
 */
void times_table(void)
{
int final_res=0;
int hours , minutes;
for (hours = 0; hours <= 9 ; hours++)
{
for (minutes = 0; minutes <= 9; minutes++)
{
final_res = hours*minutes;
if (final_res > 9){
if(minutes <= 9){
_putchar(',');
_putchar(' ');
}
_putchar(final_res/10+'0');
_putchar(final_res%10+'0');

}
else{
if(minutes <= 9){
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(final_res+'0');

}
}

_putchar('\n');
}
}

