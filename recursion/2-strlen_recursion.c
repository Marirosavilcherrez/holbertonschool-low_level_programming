#include <stdio.h>
#include "main.h"
/**
* _strlen_recursion - prints a string
* @s: The character print
* Return: always 0
* Description:  Funtion to print the lenght of a string
* *
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return ((1) + _strlen_recursion(s + 1));
}
