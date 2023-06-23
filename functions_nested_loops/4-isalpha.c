#include "main.h"
/**
* _isalpha - prints lowercase or upper
* @c: The character to print
* Return: always 0
* Description:  Funtion to print lowercase and upper
*
*/
int _isalpha(int c);
{
char letter;
char LETER;
int num = 0;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'c')
num = 1;
}
for (LETER = 'A'; LETER <= 'z'; LETER++)
{
if (LETER == 'C')
num = 1;
}
return (num);
}
