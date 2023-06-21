#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Prints the entry alphabet.
*description: The alphabet a to z
*return: zero
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
