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
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 99)
_putchar(49);
else
_putchar(48);
}
}
