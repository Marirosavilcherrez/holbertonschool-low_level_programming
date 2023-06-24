#include "main.h"
/**
* more_numbers - prints the numbers 0 to 14
* Return: always 0
* Description:  Funtion to print 10 times
*
*/
void more_numbers(void)
{
int numbers;
int times;

for (times = 0 ; times <= 9 ; times++)
{
for (numbers = 0 ; numbers <= 14 ; numbers++)
{
if (numbers >= 10)
_putchar('1');
_putchar(numbers % 10 + '0');
}
_putchar('\n');
}
}

