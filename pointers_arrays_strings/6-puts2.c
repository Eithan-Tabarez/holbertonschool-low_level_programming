#include "main.h"
#include <stdio.h>
/**
* puts2 - print one char out 2 of a string
*
* @str: string to print the chars
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c\n", str[i]);
		i += 2;
	}
}
