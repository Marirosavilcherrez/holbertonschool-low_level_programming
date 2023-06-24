#include "main.h"
/**
* print_line - prints a straight line
* @n: The character to print
* Return: always 0
* Description:  Funtion to print a straigh
*
*/
void print_line(int n)
{
int line;
for (line = 0; line < n; line++)
{
	_putchar('_');
}
_putchar('\n');
}

