#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: first member
 * @argv: second member
 *
 * Return: Always 0 (Success)
 * Description - Program that prints a number
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
