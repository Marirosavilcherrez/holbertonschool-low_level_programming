#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0.
*/
int main(void)
{
char abcdario;
for (abcdario = 'a'; abcdario <= 'z'; abcdario++)
{
putchar(abcdario);
}
putchar('\n');
return (0);
}
