#include "main.h"
/**
 * swap_int - swap two integers.
 *
 * @a: First pointer to swap.
 * @b: Second pointer to swap.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
