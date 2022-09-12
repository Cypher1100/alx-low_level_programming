#include <stdio.h>

/**
* main - prints the alphabet in lowercase
*
* Description: This code prints the alphabet in lowercase,
* followed by a new line,
* using the main function
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
