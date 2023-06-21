#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point void
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
