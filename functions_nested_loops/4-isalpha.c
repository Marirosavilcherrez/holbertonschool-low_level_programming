#include "main.h"
/**
* _islower - prints lowercase or upper
* @c: The character to print
* Return: always 0
* Description:  Funtion to print lowercase and upper
*
*/
int _isalpha(int c)
{
char letter;
int num = 0;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == c)
num = 1;
}
for (letter = 'A'; letter <= 'Z'; letter++)
num = 1;
}
return (num);
}
