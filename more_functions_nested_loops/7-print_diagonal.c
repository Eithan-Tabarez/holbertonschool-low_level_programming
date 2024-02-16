#include "main.h"
/**
 * print_diagonal - print a backslash.
 * @n: n lines.
 *
 * Return: 0.
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; n > i ; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
	_putchar('\\');
	_putchar('\n');
	}
}
