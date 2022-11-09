#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value of an integer
 * @a: is the int that will use for the argument of the function
 *
 * Return: 0
 */

int _abs(int a)
{
	if (a > 0 || a == 0)
	{
		return (a);
	}
	else
		return (a * -1);
}
