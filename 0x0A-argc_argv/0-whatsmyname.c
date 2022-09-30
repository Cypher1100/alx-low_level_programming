#include <stdio.h>

/**
 * main -> this is a program that prints its name
 * @argc: number of command
 * @argv: an array of command strings
 * Return: 0 when successful
 */
int main (int argc, char *argv[])
{
	printf("Progrm name is %s\n", *argv);
	return (0);
}
