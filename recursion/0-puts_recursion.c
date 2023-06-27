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
int string;
for (string = 0; s[string] != '\0'; string++)
{
_putchar(s[string]);
}
_putchar('\n');
}
