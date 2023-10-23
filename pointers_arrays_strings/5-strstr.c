#include "main.h"
/**
* coincidence - define if string is b inside a.
* @a: source string
* @b: string to be search
*
* Return: 1 or 0
*/
int coincidence(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++
	}

	if (*b == '\0')
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
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
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
