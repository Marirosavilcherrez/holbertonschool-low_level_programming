#include <stdio.h>
/**
* main - prints programming job
* Return: always 0
* Description:  Funtion to print a program
*
*/
int main(void)
{
int i = 1;
for (; i < 100 ; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
}
printf("Buzz\n");
return (0);
}

