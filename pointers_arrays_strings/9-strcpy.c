#include "main.h"
#include <stdio.h>
/**
* _strcpy - prints a function copy a string
* @dest: The character print
* @src: The character print
* Return: always 0
*
*/
char *_strcpy(char *dest, char *src)
{
int numb;
	for (numb = 0; src[numb] != '\0'; numb++)
	{
		dest[numb] = src[numb];
	}
	dest[numb] = '\0';
return (dest);
}
