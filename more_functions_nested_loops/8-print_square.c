#include "main.h"
/**
* print_square - prints a square
* @size: The character to print
* Return: always 0
* Description:  Funtion to print a # square
*
*/
void print_square(int size)
{
int i;
int j;

{
if (size % 2 == 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
if (size <= 0)
_putchar('\n');
}
}

