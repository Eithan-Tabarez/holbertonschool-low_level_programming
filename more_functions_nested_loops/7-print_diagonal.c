#include "main.h"
/**
 * print_diagonal - print a backslash.
 * @n: n lines.
 *
 * Return: 0 when n <= 0.
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (; n >= 1; n--)
		_putchar(' ');
	_putchar('\\');
}
