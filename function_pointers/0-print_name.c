#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function
 * @f: pointer to function
 * @name: pointer to char
 *
 * Description: Function that print a name
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
