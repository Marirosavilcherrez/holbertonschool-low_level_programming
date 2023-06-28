#include <stdio.h>
#include "main.h"
/**
* is_prime_number - prints a input integer
* @n: The character print
* Return: always 0
* Description:  Funtion to return integer
*
**/
int is_prime_number(int n)
{
int i;
	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
	if (n % i == 0)
	{
		return (0);
	}
	}
	return (1);
}
