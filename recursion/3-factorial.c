#include <stdio.h>
#include "main.h"
/**
* factorial - prints a factorial
* @n: The character print
* Return: always 0
* Description:  Funtion to print factorial
*
**/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
