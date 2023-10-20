#include "main.h"
/**
* _strchr - concatenate strings
* @c: test a char
* @s: source string
*
* Return: new string
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
