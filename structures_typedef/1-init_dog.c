#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Short description
 * @d: First member
 * @name: Second member
 * @age: Third member
 * @owner: Four member
 *
 * Description: Write a function that initialize a variable of type
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
