#include "main.h"
/**
* _strlen - lenght string
* @s: The character print
* Return: always 0
* Description:  Funtion to lenght a string
*
*/
int _strlen(char *s)
{
int lenght = 0;
while (s[lenght] != '\0')
{
lenght++;
}
return (lenght);
}

