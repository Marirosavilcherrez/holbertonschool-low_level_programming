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
	while (src[numb] != '\0')
	{
		dest[numb] = src[numb];
		numb++;
	}
	dest[numb] = '\0';
	putchar('\0');
return (dest);
}
