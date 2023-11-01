#include "main.h"
#include <stdlib.h>

/**
 * str_concat- Concatenate two strings.
 * @s1: string
 * @s2: string concatenated to s1
 *
 * Return: NULL or a pointer the new allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, c = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		j++;
	concat_str = malloc(sizeof(char) * j);

	if (concat_str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat_str[c++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[c++] = s2[i];
	return (concat_str);
}
