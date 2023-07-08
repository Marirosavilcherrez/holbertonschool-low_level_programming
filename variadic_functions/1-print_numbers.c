#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"
/**
 * print_numbers - Function sum integer
 * @n : variable
 * @separator : const pointer
 * Return: Always 0.
 *
 * Description: Function that prints numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
int tmp = 0;
unsigned int i;

va_start(ap, n);
i = 0;
if (separator  != NULL)
{
	for (i = 0; i <  n - 1;  i++)
	{
		tmp = va_arg(ap, int);
		printf("%d%c ", tmp, *separator);
	}
	if (i == n - 1)
	{
	tmp = va_arg(ap, int);
	printf("%d", tmp);
	}
}
putchar ('\n');
va_end(ap);
}
