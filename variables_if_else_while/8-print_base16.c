#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the hexadecimal.
 *
 * Return: Always 0.
*/
int main(void)
{
char numbers;
char letters;
for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar(numbers);
}
for (letters = 'a'; letters <= 'f'; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);
}
