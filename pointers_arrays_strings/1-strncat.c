#include "main.h"
/**
* _strncat - Print a size of the string
* @dest: string concatenation
* @src: string concanetenated
* @n: size of second string
* Return: Always.
*
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != '\0' && i < 97 && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
