#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Prints if number is positive, zero or negative
*
* Description: This code prints if number is positive, negative or zero
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2
  /* your code goes there */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}
