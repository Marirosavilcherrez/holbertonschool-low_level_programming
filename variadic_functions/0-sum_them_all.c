#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"
/**
 * sum_them_all - Function sum integer
 * @n : variable
 * Return: Always 0.
 *
 * Description: Function that returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int tmp = 0;
int suma;
unsigned int i;

va_start(ap, n);
suma = 0;
i = 0;
if (n == 0)
{
return (0);
}
for (i = 0; i <  n; i++)
{
	tmp = va_arg(ap, int);
	suma = suma + tmp;
}
va_end(ap);
return (suma);
}
