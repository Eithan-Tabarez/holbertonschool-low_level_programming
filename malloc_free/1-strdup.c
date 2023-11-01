#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a new allocated space i memory
 *
 * @str: string to be copied
 *
 * Return: NULL or pointer to the duplicated.
 */
char *_strdup(char *str)
{
	char *d;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;
	d = malloc(sizeof(char) * (j + 1));

	if (d == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		d[i] = str[i];

	d[j] = '\0';

	return (d);
}
