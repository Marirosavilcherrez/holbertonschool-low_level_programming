#include "main.h"
/**
* _islower - prints lowercase or upper
* @c: The character to print
* Return: always 0
* Description:  Funtion to print lowercase and upper
*
*/
int _islower(int c)
{
char letter;
char LETTER;
int num = 0;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == '99')
num = 1;
}
for (LETTER = 'A'; LETTER <= 'z'; LETTER++)
{
if (LETTER == '67')
num = 1;
}
return (num);
}
