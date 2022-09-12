#include <stdio.h>
/**
 * main - prints all single digit numbers of
 * base 10 starting from 0
 * Description: this code prints all single
 * digit numbers of base 10 starting from 0
 * using the min function
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z'; c>= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
