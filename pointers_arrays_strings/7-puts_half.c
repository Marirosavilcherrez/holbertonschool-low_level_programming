#include "main.h"
/**
* puts_half - prints a half string
* @str: The character print
* Return: always 0
*
*/
void puts_half(char *str)
{
int len;
int n;
	for (len = 0; str[len] != '\0'; len++)
	;
	for (n = len / 2; n < len; n++)
	{
		_putchar(str[n]);
	}
_putchar('\n');
}
