#include <stdio.h>
#include "main.h"
/**
* _puts_recursion - prints a string
* @s: The character print
* Return: always 0
* Description:  Funtion to print a string
*
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
