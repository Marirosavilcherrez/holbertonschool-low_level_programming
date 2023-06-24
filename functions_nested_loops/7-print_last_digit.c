#include "main.h"
/**
* print_last_digit- prints the last digit
* @n: The character to print
* Return: always 0
*
*/
int print_last_digit(int n)
{
int lastdig;
if (n < 0)
{
lastdig = -1 * (n % 10);
_putchar(lastdig + '0');
return (lastdig);
}
else
{
lastdig = n % 10;
_putchar(lastdig + '0');
return (lastdig);
}
}
