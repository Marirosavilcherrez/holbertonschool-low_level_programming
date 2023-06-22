#include "main.h"
/**
* _islower - prints the lowercase
* @c: The character to print
* Return: always 0
* Description:  Funtion to print the lowercase
*
*/
{
int _islower(int c)
char letter;
int num = 0;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == c)
num =1;
}
return (num);
}
