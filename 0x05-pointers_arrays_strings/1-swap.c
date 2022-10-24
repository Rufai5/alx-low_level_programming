#include"main.h"
#include <stdio.h>
/**
 * swap_int - swapping two integers' values
 * @a: first integer
 * @b: Second integer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
