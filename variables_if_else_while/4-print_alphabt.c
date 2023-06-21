#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet except e and q.
 *
 * Return: Always 0.
*/
int main(void)
{
char abcdario;
for (abcdario = 'a'; abcdario <= 'z'; abcdario++)
{
if (abcdario != 'e' && abcdario != 'q')
putchar(abcdario);
}
putchar('\n');
return (0);
}
