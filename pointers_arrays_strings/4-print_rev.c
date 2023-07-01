#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: The character print
* Return: always 0
* Description:  Funtion to prints a string
*
*/
void print_rev(char *s)
{
	int first;

	for (first = 0; s[first] != '\0'; first++)
		;
	for (first = first - 1; first >= 0; first--)
	{
		_putchar(s[first]);
	}
	_putchar('\n');
}
