#include "main.h"
/**
* _isalpha - prints lowercase or upper
* @c: The character to print
* Return: always 0
* Description:  Funtion to print lowercase and upper
*
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
