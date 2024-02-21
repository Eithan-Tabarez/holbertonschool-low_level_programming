#include "main.h"

/**
* puts2 - print one char out 2 of a string.
*
* @str: string to print the chars.
*/
void puts2(char *str)
{
	int j, i;
	
	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
