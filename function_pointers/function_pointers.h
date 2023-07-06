#ifndef MAIN_H
#define MAIN_H
/**
 * print_name - Function
 * @name: First member
 * @f: Second member
 *
 * Description: A function that prints a name
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
