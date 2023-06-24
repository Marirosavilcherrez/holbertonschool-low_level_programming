#include "main.h"
/**
* print_numbers - prints the numbers 0 to 9
* Return: always 0
* Description:  Funtion to print numbers
*
*/
void print_numbers(void)
{
int numbers;
for (numbers = '0'; numbers <= '9'; numbers++)
{
_putchar(numbers);
}
_putchar('\n');
}
