#include "main.h"

/**
 * swap_int - Script swaps values of two integers'
 * @a: first integer
 * @b: second integer
 * Return: 0 (nothing)
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
