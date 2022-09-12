#include <stdio.h>
/**
 * main - Prints a series of numbers with commas
 * Description: this code prints all
 * possible combinations of single-digit numbers
 * using the main function
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
