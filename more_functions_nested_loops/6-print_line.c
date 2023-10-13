#include "main.h"
/**
 * print_line - Print a Line, following the new line
 *
 * @n: it is a integer
 *
 */
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
