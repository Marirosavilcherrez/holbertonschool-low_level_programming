#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: first member
 * @argv: second member
 *
 * Return: Always 0 (Success)
 * Description - Program that sums numbers
 **/
int main(int argc, char *argv[])
{
int sum;
int i;
int a;
char *end;
sum = 0;

a = argc - 1;
if (a < 1)
{
	printf("0\n");
	return (0);
}
for (i = 1; argv[i] != NULL; i++)
{
	sum = sum + strtol(argv[i], &end, 10);
	if (*end != '\0')
	{
		printf("Error\n");
		return (1);
	}
}
printf("%d\n", sum);
return (0);
}
