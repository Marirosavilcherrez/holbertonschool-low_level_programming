#include "main.h"
/**
* print_most_numbers - prints the numbers 0 to 9
* Return: always 0
* Description:  Funtion to print except 2 numbers
*
*/
void print_most_numbers(void)
{
int numbers;
for (numbers = '0'; numbers <= '9'; numbers++)
{
if (numbers != '2' && numbers != '4')
_putchar(numbers);
}
_putchar('\n');
}
