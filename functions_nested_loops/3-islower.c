#include "main.h"
/**
* _islower - prints the lowercase
* @c: The character to print
* Return: always 0
* Description:  Funtion to print the lowercase
*
*/
int _islower(int c)
{
if (c >= '97' && c <= '122')
_putchar(49);
else
_putchar(48);
return (0);
}
