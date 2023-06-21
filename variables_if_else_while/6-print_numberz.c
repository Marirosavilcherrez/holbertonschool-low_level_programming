#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints all the numbers less than 10.
 *
 * Return: Always 0.
*/
int main(void)
{
int numbers;
for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar(numbers);
}
putchar('\n');
return (0);
}
