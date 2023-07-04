#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Short description
 * 
 * Description: Write a function that creates a new dog
 */
dog_t *new_dog(char *name, char *owner)
{
dog_t *my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return(NULL);
	}
	my_dog->name = name;
	my_dog->owner = owner;
	return(my_dog);
}
