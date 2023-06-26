#include <stdio.h>
#include "main.h"
/**
* print_triangle - prints size of triangule
* @size: The character to print
* Return: always 0
* Description:  Funtion to print a triangule
*
*/
void print_triangle(int size)
{
int i = 0, j, n = size - 1;
if (size > 0)
{
for (; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j < n)
_putchar(' ');
else
_putchar('#');
}
n--;
_putchar('\n');
}
}
else
_putchar('\n');
}


