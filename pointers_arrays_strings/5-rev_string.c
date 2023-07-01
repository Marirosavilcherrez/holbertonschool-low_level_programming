#include "main.h"
#include <stdio.h>
/**
* rev_string - prints a string reverse
* @s : The character print
* Return: always 0
*
*/
void rev_string(char *s)
{
int lenght = 0;
int i = 0;
char name;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	for (; i < lenght; i++)
	{
		lenght--;
		name = s[i];
		s[i] = s[lenght];
		s[lenght] = name;
	}
}
