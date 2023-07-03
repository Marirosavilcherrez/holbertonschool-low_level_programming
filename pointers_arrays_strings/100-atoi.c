#include "main.h"
#include <stdio.h>
/**
* _atoi - prints a function convert a string to integer
* @s: The character print
* Return: always 0
*
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;

while (*s)
{
	if (*s == '-')
	{
		sign = -sign;
	}
	else if (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
	}
	else if (result != 0)
	{
		break;
	}
	s++;
}
return (result * sign);
}
