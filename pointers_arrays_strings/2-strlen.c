#include "main.h"
/**
 * _strlen - return length.
 * @s: string to evaluate.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
