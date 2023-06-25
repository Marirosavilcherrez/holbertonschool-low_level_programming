#include "main.h"
/**
* times_table - prints the last digit
* @i, y: The character to print
* Return: always 0
*
*/
void times_table(void)
{
int i;
int y;
for (i = 0; i <= 9; i++)
{
for (y = 0; y <= 9; y++)
{
if (y <= 9)
{
_putchar('0' + ((i * y) / 10));
_putchar('0' + ((i * y) % 10));
if (y != 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar('\n');
}
}
_putchar('\n');
}
}
