#include "main.h"
/**
 * print_name - print a name.
 * @name: name to print.
 * @f: pointer of the pointer.
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
