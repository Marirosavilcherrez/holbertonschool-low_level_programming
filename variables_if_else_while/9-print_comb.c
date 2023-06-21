#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints all combination of a single number .
 *
 * Return: Always 0.
*/
int main(void)
{
int singlenum;
for (singlenum = 48; singlenum < 58; singlenum++)
{
putchar(singlenum);
if (singlenum < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
