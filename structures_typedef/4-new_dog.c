#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - New function
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: Always 0.
 *
 * Description: Write a function that creates a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_puppy;
char *puppyname, *puppyowner;
int longname = 0, longowner = 0, aray;

if (name == NULL || owner == NULL)
	return (NULL);
while (name[longname])
	longname++;
while (owner[longowner])
	longowner++;
my_puppy = malloc(sizeof(dog_t));
if (my_puppy == NULL)
{
	return (NULL);
}
puppyname = malloc(longname + 1);
if (puppyname == NULL)
{
	return (NULL);
}
for (aray = 0; name[aray]; aray++)
{
	puppyname[aray] = name[aray];
	puppyname[aray] = '\0';
}
puppyowner = malloc(longowner + 1);
if (puppyowner == NULL)
{
	return (NULL);
}
for (aray = 0; owner[aray]; aray++)
{
	puppyowner[aray] = owner[aray];
	puppyowner[aray] = '\0';
}
my_puppy->name = puppyname;
my_puppy->age = age;
my_puppy->owner = puppyowner;
return (my_puppy);
}
