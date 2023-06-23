#include "main.h"
/**
* _isdigit - prints is a digit
* @c: The character to print
* Return: always 0
* Description:  Funtion to print digit
*
*/
int _isdigit(int c)
{

if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
