#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: first member
 * @argv: second member
 *
 * Return: Always 0 (Success)
 * Description - Program that prints all argumnets
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
