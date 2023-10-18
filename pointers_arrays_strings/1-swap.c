#include "main.h"
/**
* swap_int - swap two integers.
* @a : pointer of the first value
* @b : pointer of the second value
*
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
