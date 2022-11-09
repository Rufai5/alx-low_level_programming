#include "main.h"

/**
 * _islower - Checking for lowercase charaters
 * @a: is the int that will use for the argument of the function
 * Return: 0
 */
int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
