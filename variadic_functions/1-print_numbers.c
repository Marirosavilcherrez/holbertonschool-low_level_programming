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
int j;

va_start(ap, n);
i = 0;
j = 0;
if (n != 0)
{
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			tmp = va_arg(ap, int);
			printf("%d", tmp);
			if (i != n - 1)
			{
				for (j = 0; separator[j] != '\0'; j++)
				putchar(separator[j]);
			}
		}
	}
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			tmp = va_arg(ap, int);
			printf("%d", tmp);
		}
	}
}
putchar ('\n');
va_end(ap);
}

