#include "main.h"
/**
 * print_triangle - <prints a triangle.
 *
 * @size: Size of trinagle.
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = size; i > 0; i--)
	{
		for (j = 2; j <= size + 1; j++)
		{
			if (j <= i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
