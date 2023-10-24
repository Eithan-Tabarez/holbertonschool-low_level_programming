#include "main.h"

/**
* sqrt_m: calculate the sqrt of a num.
* @n: number.
* @i: counter to be multipied.
* Return: sqrt 0.
*/

int sqrt_m(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (sqrt_m(n, i + 1));
}

/**
* sqrt_recursion - return sqrt of a number
* @n: number.
*
* Return: sqrt 0
*/
int _sqrt_recursion(int n)
{
        if (n < 0)
        {
                return (-1);
        }
        else if (n == 0 || n == 1)
        {
                return (n);
        }
        else
        {
                return (sqrt_m(n, 1));
        }
}

