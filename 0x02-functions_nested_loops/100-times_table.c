#include "main.h"

/**
* print_times_table - Prints a multiplication table.
* @a:The Multiplication table requested.
* Return: 0
*/

void print_times_table(int a)

{
	int i, j, res;

	if (!(a > 15 || a < 0))
	{
		for (i = 0; i <= a; i++)
		{
			res = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else if (res >= 10 && res < 100)
			{
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res >= 100 && j != 0)
			{
				_putchar((res / 100) + '0');
				_putchar((res / 10) % 10 + '0');
				_putchar((res % 10) + '0');
			}
			else
		_putchar((res % 10) + '0');
		}
	_putchar('\n');
	}
}

