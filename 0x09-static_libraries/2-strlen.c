#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the lengh of a sting
 * @s: String
 * Return: integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
