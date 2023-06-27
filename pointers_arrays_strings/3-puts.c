#include "main.h"
/**
* _puts - prints a string
* @str: The character print
* Return: always 0
* Description:  Funtion to prints a string
* follow by a new line
*
*/
void _puts(char *str)
{
int string;
for (string = 0; str[string] != '\0'; string++)
{
_putchar(str[string]);
}
_putchar('\n');
}
