#include <stdio.h>
#include "main.h"
/**
* _print_rev_recursion - prints a string
* @s: The character print
* Return: always 0
* Description:  Funtion to print a string in reverse
*
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
