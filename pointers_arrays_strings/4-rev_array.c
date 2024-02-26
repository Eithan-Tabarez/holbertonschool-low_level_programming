#include "main.h"
/**
* reverse_array - invert the array
* @a: array to be compare
* @n: size of the array
* Return: reversed array
*/

void reverse_array(int *a, int n)
{
	int swp, i, f;

	i = 0;
	f = n - 1;
	while (i < f)
	{
		swp = *(a + i);
		*(a + i) = *(a + f);
		*(a + f) = swp;
		i++;
		f--;
	}
}
