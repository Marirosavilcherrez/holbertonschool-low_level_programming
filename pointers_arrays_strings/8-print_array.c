#include "main.h"
#include <stdio.h>
/**
* print_array - prints a function n elements of an array
* @a: The character print
* @n: The character print
* Return: always 0
*
*/
void print_array(int *a, int n)
{
int numb;
	for (numb = 0; numb < n; numb++)
	{
		printf("%d", a[numb]);
	if (numb != n - 1)
	{
		printf(", ");
	}
	}
putchar('\n');
}
