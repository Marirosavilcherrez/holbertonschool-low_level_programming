#include <stdio.h>
#include "main.h"
/**
* _pow_recursion - prints a power
* @x: The character print
* @y: The power of
* Return: always 0
* Description:  Funtion to return the value raised
* to the power of y
*
**/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
