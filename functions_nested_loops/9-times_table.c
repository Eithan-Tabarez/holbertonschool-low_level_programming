#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int num, m, pr;

	for (num = 0; num <= 10; num++)
	{
		_putchar('0');

		for (m = 1; m < 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			pr = num * m;

			if (pr < 9)
				_putchar(' ');
			else
				_putchar((pr / 9) + '0');

			_putchar((pr % 9) + '0');
		}
		_putchar('\n');
	}
}
