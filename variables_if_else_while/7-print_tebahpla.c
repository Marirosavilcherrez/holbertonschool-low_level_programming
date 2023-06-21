#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet in the mirror.
 *
 * Return: Always 0.
*/
int main(void)
{
char cbario;
for (cbario = 'z'; cbario >= 'a'; cbario--)
{
putchar(cbario);
}
putchar('\n');
return (0);
}
