#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function that create an array of chars
 * @size: character to print
 * @c: The character to print
 * Return: Always 0 (Success)
 *
 **/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
