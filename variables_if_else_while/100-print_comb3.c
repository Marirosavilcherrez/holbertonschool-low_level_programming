#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints 2 digits but different from each .
 *
 * Return: Always 0.
*/
int main(void)
{
int firstdig;
int secdig;
for (firstdig = '0'; firstdig <= '8'; firstdig++)
{
	for (secdig = firstdig + 1; secdig <= '9'; secdig++)
	{
		if (firstdig != secdig)
		{
		{
			putchar(firstdig);
			putchar(secdig);
		}
			if (!(firstdig == '8' && secdig == '9'))
		{
			putchar (',');
			putchar (' ');
		}
		}
	}
}
	putchar('\n');
	return (0);
}
