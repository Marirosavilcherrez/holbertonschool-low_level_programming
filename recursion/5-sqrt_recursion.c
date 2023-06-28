#include <stdio.h>
#include "main.h"
/**
* _sqrt_recursion - prints a square root
* @n: The character print
* Return: always 0
* Description:  Funtion to return square root number
*
**/
int _sqrt_recursion(int n)
{
int sqrt;
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	sqrt = _sqrt_recursion(n / 4) * 2;
	if ((sqrt + 1) * (sqrt + 1) <= n)
	{
		sqrt++;
	}
	else if (sqrt * sqrt > n)
	{
		return (-1);
	}
	return (sqrt);
}
