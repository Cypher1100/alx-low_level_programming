#include <stdio.h>
#include "main.h"

/**
 * puts_half - script prints a string
 * @str: string to print
 *
 * Return: 0 (nothing)
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
 * _strlen - script returns the length of a string
 * @s: string
 *
 * Return: the length of the given string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
