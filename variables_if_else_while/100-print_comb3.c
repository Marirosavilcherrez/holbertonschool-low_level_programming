#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints 2 digits but different from each .
 *
 * Return: Always 0.
*/
int main(void)
{
int num1;
int num2;
for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
if (num1 != num2 && num1 < num2)
{
putchar(num1 + '0');
putchar(num2 + '0');
}
if(!(firstdig =='8' && secdig =='9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
