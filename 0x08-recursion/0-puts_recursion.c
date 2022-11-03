#include "main.h"

/**
<<<<<<< HEAD
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return: No.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
=======
 * _puts_recursion - prints a string, followed by a new line
 * @s: string
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
>>>>>>> 85d19bc9705a3981de420a187572124fd4771c07
}
