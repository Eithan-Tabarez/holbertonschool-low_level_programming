#include "main.h"
/**
* cap_string - capitalizes most of the words in a string.
* @a: analized string.
*
* Return: String with all words capitalized.
*/
char *cap_string(char *q)
{
	int i, j;
	int a[] = {};

	i  = 0;
	while (*(q + i) != '\0')
	{
		if (*(q + i) >= 'a' && *(q + i) <= 'z')
		{
			if ( i == 0)
			{
				*(q + i) = *(q + i) - 32;
			}
			else
			{
				if (q[j] == *(q + i))
				{
					*(q + i) = *(q + i) - 32;
				}
			}
		}
	i++;
	}
	return (q);
}

