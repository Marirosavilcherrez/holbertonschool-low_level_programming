#include "main.h"
/**
* void print_alphabet_x10(void)- print the alphabet lowercase 10.
*
* Return: Always 0
**/
void print_alphabet_x10(void)
{
char abcdario;
int times;
for (times = '0' ; times < '9' ; times++)
{
for (abcdario = 'a'; abcdario <= 'z'; abcdario++)
{
_putchar(abcdario);
}
_putchar('\n');
}
}
