#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*I call the alphabet game*/

/**
*main - print the alphabet in lowercase
*/
int main(void)
{
	char abcdario;
	for (abcdario = 'a'; abcdario <= 'z'; abcdario++){
		putchar(abcdario);
	}
	putchar('\n');
	return (0);
}
