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
int main(__attribute__((unused)) int argc, char *argv[])
{
	int a;
	int b;
	int result;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	result = a * b;
	printf("%d\n", result);
	return (0);
}
