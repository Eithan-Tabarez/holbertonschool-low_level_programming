#include "main.h"

/**
* _print_rev_recursion - print a string
* @s: source a string
*
* Return: string printed.
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar (*s);
}
