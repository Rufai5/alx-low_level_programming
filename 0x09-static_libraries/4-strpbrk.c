#include "main.h"

/**
 * _strpbrk - function searches string
 * @s: string
 * @accept: string
 *
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
