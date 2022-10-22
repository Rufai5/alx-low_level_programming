#include "main.h"

/**
 * print_alphabet_10× - print alphapbet
 * @char:alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a, i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

