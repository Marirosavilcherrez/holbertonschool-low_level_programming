#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Short description
 * @d: First member
 *
 * Description: Write a function that prints a struct dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
	printf("nil\n");
	return;
}
if (d->name == NULL)
{
	printf("Name: (nil)\n");
}
else
{
	printf("Name: %s\n", d->name);
}
printf("Age: %.6f\n", d->age);
if (d->owner == NULL)
{
	printf("Owner: (nil)\n");
}
else
{
	printf("Owner: %s\n", d->owner);
}
}
