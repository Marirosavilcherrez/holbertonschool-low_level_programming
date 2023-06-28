#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: first member
 * @argv: second member
 *
 * Return: Always 0 (Success)
 * Description - Program that multiplies two numbers
 **/
int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);

	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	result = a * b;
	printf("%d\n", result);
	return (0);
}
