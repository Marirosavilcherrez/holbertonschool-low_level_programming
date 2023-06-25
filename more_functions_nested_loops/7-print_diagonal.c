#include "main.h"
/**
* print_diagonal - prints a diagonal line
* @n: The character to print
* Return: always 0
* Description: Funtion to print
*
*/
void print_diagonal(int n)
{
int filas;
int columnas;
if(n > 0)
{
for (filas = 0; filas < n; filas++)
{
for (columnas = 0; columnas < filas; columnas++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
