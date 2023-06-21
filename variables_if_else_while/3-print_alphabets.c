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
char ABDARIO;
for (abcdario = 'a'; abcdario <= 'z'; abcdario++)
{
putchar(abcdario);
}
for (ABDARIO = 'A'; ABDARIO <= 'Z'; ABDARIO++)
{
putchar(ABDARIO);
}
putchar('\n');
return (0);
}
