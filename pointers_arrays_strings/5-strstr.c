#include "main.h"
/**
* match - define if string is b inside a.
* @i: source string
* @j: string to be search
*
* Return: 1 or 0
*/
int match(char *i, char *j)
{
	while (*j && *j == *i)
	{
		j++;
		i++;
	}

	if (*j == '\0')
		return (1);
	else
		return (0);
}

/**
* _strstr - prints the consecutive chars.
* @haystack: source string.
* @needle: searching a string.
*
* Return: new string.
*/
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		if ((*h == *n && match(haystack, needle) == 1) || !*n)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
