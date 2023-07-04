#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Short description
 * 
 * Description: Write a function that creates a new dog
 */
dog_t *new_dog(char *name,float age, char *owner)
{
dog_t *my_puppy;
char *puppyname;
char *puppyowner;
int longname = 0;
int longowner = 0;
int aray;

if (name == NULL || owner == NULL)
       return (NULL);

for (;name[longname] < '\0'; longname++)
for (;owner[longowner] < '\0'; longowner++)

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
	for (aray = 0; puppyname[aray]; aray++)
	{
		puppyname[aray] = name[aray];
		puppyname[aray] = '\0';
	}
puppyowner = malloc(longowner + 1);
        if (puppyowner == NULL)
        {
                return (NULL);
        }
        for (aray = 0; puppyowner[aray]; aray++)
        {
                puppyowner[aray] = owner[aray];
                puppyowner[aray] = '\0';
	}
my_puppy->name = puppyname;
my_puppy->age = age;
my_puppy->owner = puppyowner;
return(my_puppy);
}
