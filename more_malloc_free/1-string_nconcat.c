#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: string
 * @s2: string
 * @n: max of bytes
 *
 * Return: NULL or a pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int j = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		j++;

	c = malloc(sizeof(char) * (j + 1));

	if (c == NULL)
		return (NULL);

	j = 0;

	for (i = 0; s1[i]; i++)
		c[j++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		c[j++] = s2[i];
	c[j] = '\0';

	return (c);
}

