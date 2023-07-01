#include "main.h"
/**
* puts2 - prints a string
* @str: The character print
* Return: always 0
*
*/
void puts2(char *str)
{
int numb;
	for (numb = 0; str[numb] != '\0'; numb = numb + 2)
	{
		_putchar(str[numb]);
	}
_putchar('\n');
}
